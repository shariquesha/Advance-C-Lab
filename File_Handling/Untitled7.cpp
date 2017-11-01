#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("c.txt","r");
	f2=fopen("encryptc.txt","w");
	while(fscanf(f1,"%c",&ch)!=EOF)
	{
		switch(ch)
		{
			case ' ':
				fprintf(f2,"\t%d",0);
				break;
			case 'a':
				fprintf(f2,"\t%d",1);
				break;
				case 'b':
					fprintf(f2,"\t%d",2);
					break;
					case 'c':
						fprintf(f2,"\t%d",3);
						break;
						case 'd':
							fprintf(f2,"\t%d",4);
							break;
							case 'e':
								fprintf(f2,"\t%d",5);
								break;
								case 'f':
									fprintf(f2,"\t%d",6);
									break;
									case 'g':
										fprintf(f2,"\t%d",7);
										break;
										case 'h':
											fprintf(f2,"\t%d",8);
											break;
											case 'i':
												fprintf(f2,"\t%d",9);
												break;
												case 'j':
													fprintf(f2,"\t%d",10);
													break;
													case 'k':
														fprintf(f2,"\t%d",11);
														break;
														case 'l':
															fprintf(f2,"\t%d",12);
															break;
															case 'm':
																fprintf(f2,"\t%d",13);
																break;
																case 'n':
																	fprintf(f2,"\t%d",14);
																	break;
																	case 'o':
																		fprintf(f2,"\t%d",15);
																		break;
																		case 'p':
																			fprintf(f2,"\t%d",16);
																			break;
																			case 'q':
																				fprintf(f2,"\t%d",17);
																				break;
																				case 'r':
																					fprintf(f2,"\t%d",18);
																					break;
																					case 's':
																						fprintf(f2,"\t%d",19);
																						break;
																						case 't':
																							fprintf(f2,"\t%d",20);
																							break;
																							case 'u':
																								fprintf(f2,"\t%d",21);
																								break;
																								case 'v':
																									fprintf(f2,"\t%d",22);
																									break;
																									case 'w':
																										fprintf(f2,"\t%d",23);
																										break;
																										case 'x':
																											fprintf(f2,"\t%d",24);
																											break;
																											case 'y':
																												fprintf(f2,"\t%d",25);
																												break;
																												case 'z':
																													fprintf(f2,"\t%d",26);
																													break;
																													case ',':
																														fprintf(f2,"\t%d",27);
																														break;
																														case '.':
																															fprintf(f2,"\t%d",28);
																															break;
		}
		printf("%c\n",ch);
	}
	fclose(f1);
	fclose(f2);
}
