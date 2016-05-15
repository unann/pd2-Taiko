#include "togloom.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "drum.h"
#include "button.h"
#include <QImage>
#include <QBrush>


#include <QGraphicsProxyWidget>
#include <QLabel>
#include <QMovie>
#include <togloom.h>
//#include "ongor.h"
#include  <QBasicTimer>
#include <QMediaPlayer>
#include <QUrl>


Togloom::Togloom(QWidget *parent){
//	    creating scene=ene bol yg garch irj bgaagiin hvree n geed oilgochij bno
			    QGraphicsScene * scene = new QGraphicsScene();
		    scene->setSceneRect(0,0,800,600);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/

//			    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
					    setScene(scene);
				    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
					    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


}


void Togloom::ehlii(){

	    isStarted = false;
		    isPaused = false;
			    QGraphicsScene * scene = new QGraphicsScene();
				    scene->setSceneRect(0,0,800,533);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/
//					     scene->addPixmap(QPixmap(":/images/CL-gameR.gif"));

						     QLabel *gif_anim = new QLabel();
							     QMovie *movie = new QMovie(":/images/Tsenher-gameT.gif");
								     gif_anim->setMovie(movie);

									     movie->start();
										     QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);

//											     scene->setBackgroundBrush(QBrush(QImage(":/images/CL-gameR.gif")));
//												     shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
														     setScene(scene);
													     setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
														     setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

															     QTimer::singleShot(10000000000, this, SLOT(gameOver()));

//																      create player
																		      toglogch = new player();
																	      toglogch->setPixmap(QPixmap(":/images/bmars1.png"));

																		      toglogch->setPos(100,150);

//																			      make toglogch focusable
																					      toglogch->setFlag(QGraphicsItem::ItemIsFocusable);
																				  toglogch->setFocus();
																				  
//																				      adding item into the scene
																						      scene->addItem(toglogch);

//																					      create the score
																							      score= new Score();
																						      scene->addItem(score);

//																							      create life
																									      life= new Life();
																								      life->setPos(life->x(),life->y()+25);
																									      scene->addItem(life);

//																										      drumiig bii bolgoh
																												      QTimer *timer = new QTimer();
																											      QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn()));
																												          timer->start(3000);
																														      QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn2()));
																															          timer->start(4000);

//																																	          this= new Ongor();
//																																			         this->start(300);

//																																					         Pause gedeg buttoniig hiiy
																																								         Button *Pause=new Button(QString("Pause"));
																																							         int bxPos = 150;
																																									         int byPos=85;
																																											         Pause->setPos(bxPos,byPos);
																																													         connect(Pause,SIGNAL(clicked()),this,SLOT(pause()));
																																															         scene->addItem(Pause);
																																																	         Ongor a;
																																																			         a.start(1000000);

																																																					      /* // play bcg music
																																																						   *         QMediaPlayer *music= new QMediaPlayer();
																																																						   *                 music->setMedia(QUrl("qrc:/sounds/Untitled-7.mov"));
																																																						   *                         music->play();
																																																						   *                         */
																																																					        /* QLabel *gif_anima = new QLabel();
																																																							 *         QMovie *movier = new QMovie(":/sounds/Untitled-7.mov");
																																																							 *                 gif_anima->setMovie(movie);
																																																							 *
																																																							 *                         movier->start();
																																																							 *                                 QGraphicsProxyWidget *proxyr = scene->addWidget(gif_anima);
																																																							 *                                 */
}
void Togloom::dund(){

	    isStarted = false;
		        isPaused = false;
				    QGraphicsScene * scene = new QGraphicsScene();
					    scene->setSceneRect(0,0,800,533);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/
//						    scene->setBackgroundBrush(QBrush(QImage(":/images/Tsenher game1.png")));

							    QLabel *gif_anim = new QLabel();
								    QMovie *movie = new QMovie(":/images/Ulaan-gameT.gif");
									    gif_anim->setMovie(movie);

										    movie->start();
											    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);




//												    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
														    setScene(scene);
													    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
														    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

//															     create player
																	     toglogch = new player();
																     toglogch->setPixmap(QPixmap(":/images/212.png"));

//																	     toglogch->setPos(126,140);

//																		     make toglogch focusable
																				     toglogch->setFlag(QGraphicsItem::ItemIsFocusable);
																			     toglogch->setFocus();

//																				     adding item into the scene
																						     scene->addItem(toglogch);

																					     QTimer::singleShot(10000000000, this, SLOT(gameOver()));

//																						     create the score
																								     score= new Score();
																							     scene->addItem(score);

//																								     create life
																										     life= new Life();
																									     life->setPos(life->x(),life->y()+25);
																										     scene->addItem(life);


//																											     drumiig bii bolgoh
																													     QTimer *timer = new QTimer();
																												     QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn()));
																													         timer->start(2000);

																															     QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn2()));
																																             timer->start(3000);

//																																			             Pause gedeg buttoniig hiiy
																																							             Button *Pause=new Button(QString("Pause"));
																																						             int bxPos = 150;
																																									             int byPos=85;
																																												             Pause->setPos(bxPos,byPos);
																																															             connect(Pause,SIGNAL(clicked()),this,SLOT(pause()));
																																																		             scene->addItem(Pause);

}
void Togloom::hvnd(){

	    isStarted = false;
		        isPaused = false;
				    QGraphicsScene * scene = new QGraphicsScene();
					    scene->setSceneRect(0,0,800,533);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/

						    QLabel *gif_anim = new QLabel();
							    QMovie *movie = new QMovie(":/images/CL-gameT.gif");
								    gif_anim->setMovie(movie);

									    movie->start();
										    QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);


//											    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
													    setScene(scene);
												    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
													    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//														    scene->setBackgroundBrush(QBrush(QImage(":/images/Ulaan game1.png")));


//															     create player
																	     toglogch = new player();
																     toglogch->setPixmap(QPixmap(":/images/cl1.png"));

//																	     toglogch->setPos(90,140);

//																		     make toglogch focusable
																				     toglogch->setFlag(QGraphicsItem::ItemIsFocusable);
																			     toglogch->setFocus();

//																				     adding item into the scene
																						     scene->addItem(toglogch);

																					     QTimer::singleShot(10000000000, this, SLOT(gameOver()));

//																						     create the score
																								     score= new Score();
																							     scene->addItem(score);

//																								     create life
																										     life= new Life();
																									     life->setPos(life->x(),life->y()+25);
																										     scene->addItem(life);



//																											     drumiig bii bolgoh
																													     QTimer *timer = new QTimer();
																												     QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn()));
																													         timer->start(1200);

																															     QObject::connect(timer,SIGNAL(timeout()),toglogch,SLOT(spawn2()));
																																             timer->start(1800);

//																																			             Pause gedeg buttoniig hiiy
																																							             Button *Pause=new Button(QString("Pause"));
																																						             int bxPos = 150;
																																									             int byPos=85;
																																												             Pause->setPos(bxPos,byPos);
																																															             connect(Pause,SIGNAL(clicked()),this,SLOT(pause()));
																																																		             scene->addItem(Pause);

}
int timeoutTime() { return 1000 ; }
 QBasicTimer timer;
 void Togloom::pause()
{
	    if (!isStarted)
			        return;

		    isPaused = !isPaused;
			    if (isPaused) {
					        timer.stop();
							    } else {
									        timer.start(timeoutTime(), this);
											    }
				    update();
}

void Togloom::displayMainMenu(){

//	    creating scene=ene bol yg garch irj bgaagiin hvree n geed oilgochij bno
			    QGraphicsScene * scene = new QGraphicsScene();
		    scene->setSceneRect(0,0,800,600);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/
			    scene->setBackgroundBrush(QBrush(QImage(":/images/Start.png")));

//				    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
						    setScene(scene);
					    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
						    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);



//							    nogoo labeluud deer chen yaar text garch ireh yu yunii songolttoi bhiin be? ehnii nwren deer chen togloomnii ner garch irne
									    QGraphicsTextItem *titleText= new QGraphicsTextItem(QString("TAIKO"));
								    QFont titleFont("comic sans",50);
									    titleText->setFont(titleFont);
										    int txPos = this->width()/2-titleText->boundingRect().width()/2;
											    int tyPos = 150;
												    titleText->setPos(txPos,tyPos);
													    scene->addItem(titleText);

//														    play gedeg buttoniig hiiy
																    Button *playButton=new Button(QString("Play"));
															    int bxPos = this->width()/2-playButton->boundingRect().width()/2;
																    int byPos=275;
																	    playButton->setPos(bxPos,byPos);
																		    connect(playButton,SIGNAL(clicked()),this,SLOT(Shat()));
																			    scene->addItem(playButton);


//																				    exit gedeg buttoniig gargaj bna
																						    Button *exitButton=new Button(QString("Exit"));
																					    int exPos=this->width()/2-exitButton->boundingRect().width()/2;
																						    int eyPos=350;
																							    exitButton->setPos(exPos,eyPos);
																								    connect(exitButton,SIGNAL(clicked()),this,SLOT(close()));
																									    scene->addItem(exitButton);

}


void Togloom::Shat(){

//	    creating scene=ene bol yg garch irj bgaagiin hvree n geed oilgochij bno
			    QGraphicsScene * scene = new QGraphicsScene();
		    scene->setSceneRect(0,0,800,600);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/

//			    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
					    setScene(scene);
				    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
					    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);



//						    nogoo labeluud deer chen yaar text garch ireh yu yunii songolttoi bhiin be? ehnii nwren deer chen togloomnii ner garch irne
								    QGraphicsTextItem *TITLE= new QGraphicsTextItem(QString("Level"));
							    QFont titleFont("comic sans",50);
								    TITLE->setFont(titleFont);
									    int txPos = this->width()/2-TITLE->boundingRect().width()/2;
										    int tyPos = 150;
											    TITLE->setPos(txPos,tyPos);
												    scene->addItem(TITLE);

//													    toglohdoo uyee songii, easy gedeg buttoniig hiiy
															    Button *easyButton=new Button(QString("EASY"));
														    int bxPos = this->width()/2-easyButton->boundingRect().width()/2;
															    int byPos=275;
																    easyButton->setPos(bxPos,byPos);
																	    connect(easyButton,SIGNAL(clicked()),this,SLOT(ehlii()));
//																		    connect(easyButton,SIGNAL(clicked()),this,SLOT(tsa::decrease()->start()));

																			    scene->addItem(easyButton);


//																				    medium gedeg buttoniig gargaj bna
																						    Button *mediumButton=new Button(QString("MEDIUM"));
																					    int exPos=this->width()/2-mediumButton->boundingRect().width()/2;
																						    int eyPos=350;
																							    mediumButton->setPos(exPos,eyPos);
																								    connect(mediumButton,SIGNAL(clicked()),this,SLOT(dund()));
																									    scene->addItem(mediumButton);


//																										    hard gedeg buttoniig gargaj bna
																												    Button *hardButton=new Button(QString("HARD"));
																											    int hxPos=this->width()/2-hardButton->boundingRect().width()/2;
																												    int hyPos=425;
																													    hardButton->setPos(hxPos,hyPos);
																														    connect(hardButton,SIGNAL(clicked()),this,SLOT(hvnd()));
																															    scene->addItem(hardButton);

}

void Togloom::harah(){

	    QGraphicsTextItem *neg = new QGraphicsTextItem();

		    neg->setPlainText(QString("Score: ")+QString::number(score->getScore()));
			    neg->setDefaultTextColor(Qt::red);
				    neg->setFont(QFont("times",10));

}

void Togloom::rePlay()
{

	    displayMainMenu();
		    Shat();


}


void Togloom::gameOver(){

//	    creating scene=ene bol yg garch irj bgaagiin hvree n geed oilgochij bno
			    QGraphicsScene * scene = new QGraphicsScene();
		    scene->setSceneRect(0,0,800,600);/*ene uyed item maan bas scene-ees hamaaraltai uchir 0,0 positionluu ochino*/
//			    scene->setBackgroundBrush(QBrush(QImage(":/images/Start.png")));

//				    shine hiisen scene ee visualize hiiy, ooroor helvel naash tsaashaa sungahgv togtvortoi bolgono gesen vg
						    setScene(scene);
					    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
						    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


//							    nogoo labeluud deer chen yaar text garch ireh yu yunii songolttoi bhiin be? ehnii nwren deer chen togloomnii ner garch irne
									    QGraphicsTextItem *titleText= new QGraphicsTextItem(QString("Game Over"));
								    QFont titleFont("comic sans",50);
									    titleText->setFont(titleFont);
										    int txPos = this->width()/2-titleText->boundingRect().width()/2;
											    int tyPos = 90;
												    titleText->setPos(txPos,tyPos);
													    scene->addItem(titleText);

//														    QGraphicsTextItem *neg = new QGraphicsTextItem();




//															    High Score gedeg buttoniig hiiy
																	    Button *highScore=new Button(QString(score->getScore()));
																    int bxPos = this->width()/2-highScore->boundingRect().width()/2;
																	    int byPos=105;
																		    highScore->setPos(bxPos,byPos);
																			    highScore->setRect(0,0,5,5);
																				    connect(highScore,SIGNAL(clicked()),this,SLOT(close()));
																					    scene->addItem(highScore);


//																						    amiig n haruula gedeg buttoniig gargaj bna
																								    Button *first=new Button(QString(life->getLife()));
																							    int nxPos=this->width()/2-first->boundingRect().width()/2;
																								    int nyPos=260;
																									    first->setPos(nxPos,nyPos);
																										    first->setRect(0,0,5,5);
																											    connect(first,SIGNAL(clicked()),this,SLOT(close()));
																												    scene->addItem(first);


																													    //Play again gedeg buttoniig hiiy
																														    Button *rePlay=new Button(QString("Play Again"));
																														        int jxPos = this->width()/2-rePlay->boundingRect().width()/2;
																														            int jyPos=305;
																														                rePlay->setPos(jxPos,jyPos);
																														                    rePlay->setRect(0,0,100,50);
																														                        connect(rePlay,SIGNAL(clicked()),this,SLOT(rePlay()));
																														                            scene->addItem(rePlay);
																														
																														
																														                                // gedeg buttoniig gargaj bna
																														                                    Button *Exit=new Button(QString("EXIT"));
																														                                        int wxPos=this->width()/2-Exit->boundingRect().width()/2;
																														                                            int wyPos=460;
																														                                                Exit->setPos(wxPos,wyPos);
																														                                                    Exit->setRect(0,0,100,50);
																														                                                        connect(Exit,SIGNAL(clicked()),this,SLOT(close()));
																														                                                            scene->addItem(Exit);
																														
																														                                                            }
																														
																														
