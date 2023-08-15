#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
using namespace sf;

int grid[24][24];
int sgrid[24][24];

int main()
{

	sf::SoundBuffer buffer;
	buffer.loadFromFile("Main.wav");

	sf::Sound sound;
	sound.setBuffer(buffer);


	sf::SoundBuffer buffe;
	buffe.loadFromFile("Boom.wav");

	sf::Sound ound;
	ound.setBuffer(buffe);


	RenderWindow window(sf::VideoMode(700, 600), "Game.Minesweeper");

	while (window.isOpen())
	{
		sf::Event event;

		sf::View view(sf::FloatRect(0, 0, 1080, 1082));
		window.setView(view);

		sf::Sprite background;

		sf::Texture texture;
		if (!texture.loadFromFile("images/background.jpg"))
		{
			std::cout << "Can Not Load Photo" << std::endl;
		}
		background.setTexture(texture);

		window.clear();
		window.draw(background);
		window.display();




		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					std::cout << "left" << std::endl;
					std::cout << "mouse x: " << event.mouseButton.x << std::endl;
					std::cout << "mouse y: " << event.mouseButton.y << std::endl;

					if (event.mouseButton.x >= 509 && event.mouseButton.x <= 653 && event.mouseButton.y >= 469 && event.mouseButton.y <= 566)
					{

						sound.play();

					}

					if (event.mouseButton.x >= 61 && event.mouseButton.x <= 524 && event.mouseButton.y >= 461 && event.mouseButton.y <= 568)
					{
						window.close();
						sound.stop();
					}
					if (event.mouseButton.x >= 203 && event.mouseButton.x <= 508 && event.mouseButton.y >= 222 && event.mouseButton.y <= 395)
					{

						RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

						while (windo.isOpen())
						{
							sf::Event event;

							sf::View view(sf::FloatRect(0, 0, 1820, 1080));
							windo.setView(view);

							sf::Sprite background;

							sf::Texture texture;
							if (!texture.loadFromFile("images/modes.jpg"))
							{
								std::cout << "Can Not Load Photo" << std::endl;
							}
							background.setTexture(texture);

							windo.clear();
							windo.draw(background);
							windo.display();

							while (windo.pollEvent(event))
							{
								if (event.type == sf::Event::MouseButtonPressed)
								{
									if (event.mouseButton.button == sf::Mouse::Left)
									{
										std::cout << "left" << std::endl;
										std::cout << "mouse x: " << event.mouseButton.x << std::endl;
										std::cout << "mouse y: " << event.mouseButton.y << std::endl;
										if (event.mouseButton.x >= 534 && event.mouseButton.x <= 695 && event.mouseButton.y >= 433 && event.mouseButton.y <= 536)
										{
											windo.close();
										}

										if (event.mouseButton.x >= 206 && event.mouseButton.x <= 516 && event.mouseButton.y >= 151 && event.mouseButton.y <= 253)//sea background
										{

											RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

											while (windo.isOpen())
											{
												sf::Event event;

												sf::View view(sf::FloatRect(0, 0, 1080, 1550));
												windo.setView(view);

												sf::Sprite background;

												sf::Texture texture;
												if (!texture.loadFromFile("images/sea/first.jpg"))
												{
													std::cout << "Can Not Load Photo" << std::endl;
												}
												background.setTexture(texture);

												windo.clear();
												windo.draw(background);
												windo.display();

												while (windo.pollEvent(event))
												{
													if (event.type == sf::Event::MouseButtonPressed)
													{
														if (event.mouseButton.button == sf::Mouse::Left)
														{
															std::cout << "left" << std::endl;
															std::cout << "mouse x: " << event.mouseButton.x << std::endl;
															std::cout << "mouse y: " << event.mouseButton.y << std::endl;
															if (event.mouseButton.x >= 499 && event.mouseButton.x <= 675 && event.mouseButton.y >= 518 && event.mouseButton.y <= 568)
															{
																windo.close();
															}


															if (event.mouseButton.x >= 14 && event.mouseButton.x <= 291 && event.mouseButton.y >= 144 && event.mouseButton.y <= 265)//sea instructions
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1440, 1080));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/sea/instructions.png"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																				if (event.mouseButton.x >= 543 && event.mouseButton.x <= 684 && event.mouseButton.y >= 507 && event.mouseButton.y <= 571)
																				{
																					windo.close();
																				}
																			}

																		}
																	}

																}
															}



															if (event.mouseButton.x >= 409 && event.mouseButton.x <= 680 && event.mouseButton.y >= 145 && event.mouseButton.y <= 262)//sea about
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1920, 1080));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/sea/about.png"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																				if (event.mouseButton.x >= 572 && event.mouseButton.x <= 684 && event.mouseButton.y >= 517 && event.mouseButton.y <= 586)
																				{
																					windo.close();
																				}
																			}

																		}
																	}

																}
															}



															if (event.mouseButton.x >= 169 && event.mouseButton.x <= 528 && event.mouseButton.y >= 321 && event.mouseButton.y <= 528)//sea levels
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1080, 1780));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/sea/levels.jpg"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																				if (event.mouseButton.x >= 496 && event.mouseButton.x <= 685 && event.mouseButton.y >= 458 && event.mouseButton.y <= 566)
																				{
																					windo.close();
																				}

																				if (event.mouseButton.x >= 301 && event.mouseButton.x <= 542 && event.mouseButton.y >= 112 && event.mouseButton.y <= 197)//easy level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(450, 320), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 12; i++)
																					for (int j = 1; j <= 8; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 12; i++)
																					for (int j = 1; j <= 8; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];
																								if (sgrid[x][y] == 0){
																									for (int i = 0; i < 12; i++){
																										for (int j = 0; j < 8; j++){
																											if (sgrid[x][y] == 0)
																											{
																												sgrid[x + 1][y] = grid[x + 1][y];
																												sgrid[x][y + 1] = grid[x][y + 1];
																												sgrid[x - 1][y] = grid[x - 1][y];
																												sgrid[x][y - 1] = grid[x][y - 1];
																			c 1q`
																				sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																												sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																												sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																												sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																											}
																										}
																									}
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}
																						
																						int count = 0;
																						app.clear(Color::Blue);
																						for (int i = 1; i <= 12; i++)
																						for (int j = 1; j <= 8; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																								if (count >=0 && count<5)
																								{
																						
																				++																	ound.play();
																									sf::Event event;

																									sf::View view(sf::FloatRect(0, 0, 1430, 1080));
																									app.setView(view);

																									sf::Sprite background;

																									sf::Texture texture;
																									if (!texture.loadFromFile("images/sea/lose.png"))
																									{
																										std::cout << "Can Not Load Photo" << std::endl;
																									}
																									background.setTexture(texture);

																									app.clear();
																									app.draw(background);
																									app.display();
																									count++;
																								}

																								sgrid[i][j] = grid[i][j];
																								
																							}
																						
																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}
																						


																						app.display();
																					}
																				}

																				if (event.mouseButton.x >= 311 && event.mouseButton.x <= 551 && event.mouseButton.y >= 258 && event.mouseButton.y <= 339)//medium level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(550, 390), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 15; i++)
																					for (int j = 1; j <= 10; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 15; i++)
																					for (int j = 1; j <= 10; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];

																								if (sgrid[x][y] == 0 && grid[x][y] == 0)
																								{
																									sgrid[x + 1][y] = grid[x + 1][y];
																									sgrid[x][y + 1] = grid[x][y + 1];
																									sgrid[x - 1][y] = grid[x - 1][y];
																									sgrid[x][y - 1] = grid[x][y - 1];
																									sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																									sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																									sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																									sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}

																						int count = 0;
																						app.clear(Color::Blue);
																						for (int i = 1; i <= 15; i++)
																						for (int j = 1; j <= 10; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																							if (count >= 0 && count<5)
																							{
																								ound.play();
																								sf::Event event;

																								sf::View view(sf::FloatRect(0, 0, 1430, 1080));
																								app.setView(view);

																								sf::Sprite background;

																								sf::Texture texture;
																								if (!texture.loadFromFile("images/sea/lose.png"))
																								{
																									std::cout << "Can Not Load Photo" << std::endl;
																								}
																								background.setTexture(texture);

																								app.clear();
																								app.draw(background);
																								app.display();
																								count++;
																							}
																							sgrid[i][j] = grid[i][j];

																						}
																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}

																						app.display();
																					}

																				}

																				if (event.mouseButton.x >= 302 && event.mouseButton.x <= 544 && event.mouseButton.y >= 391 && event.mouseButton.y <= 476)//hard level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(580, 580), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 16; i++)
																					for (int j = 1; j <= 16; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 16; i++)
																					for (int j = 1; j <= 16; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];

																								if (sgrid[x][y] == 0 && grid[x][y] == 0)
																								{
																									sgrid[x + 1][y] = grid[x + 1][y];
																									sgrid[x][y + 1] = grid[x][y + 1];
																									sgrid[x - 1][y] = grid[x - 1][y];
																									sgrid[x][y - 1] = grid[x][y - 1];
																									sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																									sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																									sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																									sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}
																						int count = 0;
																						app.clear(Color::Blue);
																						for (int i = 1; i <= 16; i++)
																						for (int j = 1; j <= 16; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																								if (count >= 0 && count<5)
																								{
																									ound.play();
																									sf::Event event;

																									sf::View view(sf::FloatRect(0, 0, 1430, 1080));
																									app.setView(view);

																									sf::Sprite background;

																									sf::Texture texture;
																									if (!texture.loadFromFile("images/sea/lose.png"))
																									{
																										std::cout << "Can Not Load Photo" << std::endl;
																									}
																									background.setTexture(texture);

																									app.clear();
																									app.draw(background);
																									app.display();
																									count++;
																								}
																								sgrid[i][j] = grid[i][j];

																							}
																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}

																						app.display();
																					}

																				}
																				





																			}

																		}
																	}

																}
															}








														}

													}
												}

											}
										}




										if (event.mouseButton.x >= 208 && event.mouseButton.x <= 517 && event.mouseButton.y >= 329 && event.mouseButton.y <= 430)//galaxy background
										{

											RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

											while (windo.isOpen())
											{
												sf::Event event;

												sf::View view(sf::FloatRect(0, 0, 1080, 1080));
												windo.setView(view);

												sf::Sprite background;

												sf::Texture texture;
												if (!texture.loadFromFile("images/galaxy/first.jpg"))
												{
													std::cout << "Can Not Load Photo" << std::endl;
												}
												background.setTexture(texture);

												windo.clear();
												windo.draw(background);
												windo.display();

												while (windo.pollEvent(event))
												{
													if (event.type == sf::Event::MouseButtonPressed)
													{
														if (event.mouseButton.button == sf::Mouse::Left)
														{
															std::cout << "left" << std::endl;
															std::cout << "mouse x: " << event.mouseButton.x << std::endl;
															std::cout << "mouse y: " << event.mouseButton.y << std::endl;
															if (event.mouseButton.x >= 456 && event.mouseButton.x <= 673 && event.mouseButton.y >= 512 && event.mouseButton.y <= 560)
															{
																windo.close();
															}


															if (event.mouseButton.x >= 36 && event.mouseButton.x <= 309 && event.mouseButton.y >= 150 && event.mouseButton.y <= 291)//galaxy instructions
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1420, 1080));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/galaxy/instructions.jpg"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																			if (event.mouseButton.x >= 572 && event.mouseButton.x <= 672 && event.mouseButton.y >= 541 && event.mouseButton.y <= 586)
																			    {
																					windo.close();
																				}
																			}

																		}
																	}

																}
															}



															if (event.mouseButton.x >= 386 && event.mouseButton.x <= 650 && event.mouseButton.y >= 157 && event.mouseButton.y <= 296)//galaxy about
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1700, 1080));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/galaxy/about.jpg"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																				if (event.mouseButton.x >= 544 && event.mouseButton.x <= 686 && event.mouseButton.y >= 471 && event.mouseButton.y <= 562)
																				{
																					windo.close();
																				}
																			}

																		}
																	}

																}
															}



															if (event.mouseButton.x >= 135 && event.mouseButton.x <= 554 && event.mouseButton.y >= 348 && event.mouseButton.y <= 567)//galaxy levels
															{

																RenderWindow windo(sf::VideoMode(700, 600), "Game.Minesweeper");

																while (windo.isOpen())
																{
																	sf::Event event;

																	sf::View view(sf::FloatRect(0, 0, 1080, 1080));
																	windo.setView(view);

																	sf::Sprite background;

																	sf::Texture texture;
																	if (!texture.loadFromFile("images/galaxy/levels.jpg"))
																	{
																		std::cout << "Can Not Load Photo" << std::endl;
																	}
																	background.setTexture(texture);

																	windo.clear();
																	windo.draw(background);
																	windo.display();

																	while (windo.pollEvent(event))
																	{
																		if (event.type == sf::Event::MouseButtonPressed)
																		{
																			if (event.mouseButton.button == sf::Mouse::Left)
																			{
																				std::cout << "left" << std::endl;
																				std::cout << "mouse x: " << event.mouseButton.x << std::endl;
																				std::cout << "mouse y: " << event.mouseButton.y << std::endl;
																				if (event.mouseButton.x >= 530 && event.mouseButton.x <= 694 && event.mouseButton.y >= 453 && event.mouseButton.y <= 593)
																				{
																					windo.close();
																				}


																				if (event.mouseButton.x >= 252 && event.mouseButton.x <= 459 && event.mouseButton.y >= 104 && event.mouseButton.y <= 257)//easy level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(450, 320), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 12; i++)
																					for (int j = 1; j <= 8; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 12; i++)
																					for (int j = 1; j <= 8; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];

																								if (sgrid[x][y] == 0 && grid[x][y] == 0)
																								{
																									sgrid[x + 1][y] = grid[x + 1][y];
																									sgrid[x][y + 1] = grid[x][y + 1];
																									sgrid[x - 1][y] = grid[x - 1][y];
																									sgrid[x][y - 1] = grid[x][y - 1];
																									sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																									sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																									sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																									sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}
																						int count = 0;
																						app.clear(Color::Black);
																						for (int i = 1; i <= 12; i++)
																						for (int j = 1; j <= 8; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																								if (count >= 0 && count<5)
																								{
																									ound.play();
																									sf::Event event;

																									sf::View view(sf::FloatRect(0, 0, 740, 400));
																									app.setView(view);

																									sf::Sprite background;

																									sf::Texture texture;
																									if (!texture.loadFromFile("images/galaxy/lose.png"))
																									{
																										std::cout << "Can Not Load Photo" << std::endl;
																									}
																									background.setTexture(texture);

																									app.clear();
																									app.draw(background);
																									app.display();
																									count++;
																								}
																								sgrid[i][j] = grid[i][j];

																							}

																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}



																						app.display();
																					}
																				}

																				if (event.mouseButton.x >= 255 && event.mouseButton.x <= 468 && event.mouseButton.y >= 277 && event.mouseButton.y <= 423)//medium level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(550, 390), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 15; i++)
																					for (int j = 1; j <= 10; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 15; i++)
																					for (int j = 1; j <= 10; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];

																								if (sgrid[x][y] == 0 && grid[x][y] == 0)
																								{
																									sgrid[x + 1][y] = grid[x + 1][y];
																									sgrid[x][y + 1] = grid[x][y + 1];
																									sgrid[x - 1][y] = grid[x - 1][y];
																									sgrid[x][y - 1] = grid[x][y - 1];
																									sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																									sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																									sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																									sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}

																						int count = 0;
																						app.clear(Color::Black);
																						for (int i = 1; i <= 15; i++)
																						for (int j = 1; j <= 10; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																								if (count >= 0 && count<5)
																								{
																									ound.play();
																									sf::Event event;

																									sf::View view(sf::FloatRect(0, 0, 740, 400));
																									app.setView(view);

																									sf::Sprite background;

																									sf::Texture texture;
																									if (!texture.loadFromFile("images/galaxy/lose.png"))
																									{
																										std::cout << "Can Not Load Photo" << std::endl;
																									}
																									background.setTexture(texture);

																									app.clear();
																									app.draw(background);
																									app.display();
																									count++;
																								}
																								sgrid[i][j] = grid[i][j];

																							}
																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}

																						app.display();
																					}

																				}

																				if (event.mouseButton.x >= 256 && event.mouseButton.x <= 468 && event.mouseButton.y >= 440 && event.mouseButton.y <= 592)//hard level
																				{
																					srand(time(0));

																					RenderWindow app(VideoMode(580, 580), "Game.Minesweeper");

																					int w = 32;

																					Texture t;
																					t.loadFromFile("images/tiles.jpg");
																					Sprite s(t);

																					for (int i = 1; i <= 16; i++)
																					for (int j = 1; j <= 16; j++)
																					{
																						sgrid[i][j] = 10;
																						if (rand() % 5 == 0)  grid[i][j] = 9;
																						else grid[i][j] = 0;
																					}

																					for (int i = 1; i <= 16; i++)
																					for (int j = 1; j <= 16; j++)
																					{
																						int n = 0;
																						if (grid[i][j] == 9) continue;
																						if (grid[i + 1][j] == 9) n++;
																						if (grid[i][j + 1] == 9) n++;
																						if (grid[i - 1][j] == 9) n++;
																						if (grid[i][j - 1] == 9) n++;
																						if (grid[i + 1][j + 1] == 9) n++;
																						if (grid[i - 1][j - 1] == 9) n++;
																						if (grid[i - 1][j + 1] == 9) n++;
																						if (grid[i + 1][j - 1] == 9) n++;
																						grid[i][j] = n;
																					}

																					while (app.isOpen())
																					{
																						Vector2i pos = Mouse::getPosition(app);
																						int x = pos.x / w;
																						int y = pos.y / w;

																						Event e;
																						while (app.pollEvent(e))
																						{
																							if (e.type == Event::Closed)
																								app.close();

																							if (e.type == Event::MouseButtonPressed)
																							if (e.key.code == Mouse::Left){
																								sgrid[x][y] = grid[x][y];

																								if (sgrid[x][y] == 0 && grid[x][y] == 0)
																								{
																									sgrid[x + 1][y] = grid[x + 1][y];
																									sgrid[x][y + 1] = grid[x][y + 1];
																									sgrid[x - 1][y] = grid[x - 1][y];
																									sgrid[x][y - 1] = grid[x][y - 1];
																									sgrid[x + 1][y + 1] = grid[x + 1][y + 1];
																									sgrid[x + 1][y - 1] = grid[x + 1][y - 1];
																									sgrid[x - 1][y + 1] = grid[x - 1][y + 1];
																									sgrid[x - 1][y - 1] = grid[x - 1][y - 1];
																								}
																							}
																							else if (e.key.code == Mouse::Right) sgrid[x][y] = 11;
																						}
																						int count = 0;
																						app.clear(Color::Black);
																						for (int i = 1; i <= 16; i++)
																						for (int j = 1; j <= 16; j++)
																						{
																							if (sgrid[x][y] == 9)
																							{
																								
																								if (count >= 0 && count<5)
																								{
																									ound.play();
																									sf::Event event;

																									sf::View view(sf::FloatRect(0, 0, 740, 400));
																									app.setView(view);

																									sf::Sprite background;

																									sf::Texture texture;
																									if (!texture.loadFromFile("images/galaxy/lose.png"))
																									{
																										std::cout << "Can Not Load Photo" << std::endl;
																									}
																									background.setTexture(texture);

																									app.clear();
																									app.draw(background);
																									app.display();
																									count++;
																								}
																								
																								sgrid[i][j] = grid[i][j];
																							}
																							s.setTextureRect(IntRect(sgrid[i][j] * w, 0, w, w));
																							s.setPosition(i*w, j*w);
																							app.draw(s);
																						}

																						app.display();
																					}

																				}


																			}

																		}
																	}

																}
															}


														}

													}
												}

											}
										}


									}
								}
							}
						}
					}
				}


			}
		}

		if (event.type == sf::Event::Closed)
		{
			window.close();
			sound.stop();
		}

	}

	return 0;
}