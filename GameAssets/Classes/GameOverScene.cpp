#include "GameOverScene.h"
#include "GameScene.h"
#include "MainMenuScene.h"
#include "Definitions.h"

USING_NS_CC;

Scene* GameOverScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameOverScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameOverScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto backgroundSprite = Sprite::create("iphone/Background.png");
    backgroundSprite->setPosition( Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    
    this->addChild(backgroundSprite);
    
    // set Gameover Scene to Retry GameScene
    auto retryItem = MenuItemImage::create("iphone/Retry Button.png", "iphone/Play Button Clicked.png", CC_CALLBACK_1(GameOverScene::GoToGameScene, this) );
    
    retryItem->setPosition( Point( visibleSize.width /2 + origin.x , visibleSize.height / 4 * 3 ));
    
    // set GameOver Scene to MenuScene
    auto mainMenuItem = MenuItemImage::create("iphone/Menu Button.png", "iphone/Menu Button Clicked.png", CC_CALLBACK_1(GameOverScene::GoToMainMenuScene, this) );
    
    mainMenuItem->setPosition( Point( visibleSize.width /2 + origin.x , visibleSize.height / 4 ));
    
    auto menu = Menu::create( retryItem, mainMenuItem, NULL );
    menu->setPosition( Point::ZERO);
    this->addChild( menu );
    
    return true;
}

void GameOverScene::GoToMainMenuScene( cocos2d::Ref *sender )
{
    auto scene = MainMenuScene::createScene();
    Director::getInstance()->replaceScene( TransitionFade::create( TRANSITION_TIME, scene));
    
}
void GameOverScene::GoToGameScene( cocos2d::Ref *sender )
{
    auto scene = GameScene::createScene();
    Director::getInstance()->replaceScene( TransitionFade::create( TRANSITION_TIME, scene));
}






