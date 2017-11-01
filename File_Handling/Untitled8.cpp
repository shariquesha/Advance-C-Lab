#include<stdio.h>

main()
{
	FILE *f1,*f2;
	int i;
	f1=fopen("encryptc.txt","r");
	f2=fopen("decrypt.txt","w");
	while(fscanf(f1,"%d",&i)!=EOF)
	{
		printf("%d\n",i);
		switch (i)
		{
			case 0:
				fprintf(f2," ");
				break;
			case 1:
				fprintf(f2,"%c",97);
				break;
				case 2:
					fprintf(f2,"%c",98);
					break;
					case 3:
						fprintf(f2,"%c",99);
						break;
						case 4:
							fprintf(f2,"%c",100);
							break;
							case 5:
								fprintf(f2,"%c",101);
								break;
								case 6:
									fprintf(f2,"%c",102);
									break;
									case 7:
										fprintf(f2,"%c",103);
										break;
										case 8:
											fprintf(f2,"%c",104);
											break;
											case 9:
												fprintf(f2,"%c",105);
												break;
 											case 10:
													fprintf(f2,"%c",106);
													break;
													case 11:
														fprintf(f2,"%c",107);
														break;
														case 12:
															fprintf(f2,"%c",108);
															break;
															case 13:
																fprintf(f2,"%c",109);
																break;
																case 14:
																	fprintf(f2,"%c",110);
																	break;
																	case 15:
																		fprintf(f2,"%c",111);
																		break;
																		case 16:
																			fprintf(f2,"%c",112);
																			break;
																			case 17:
																				fprintf(f2,"%c",113);
																				break;
																				case 18:
																					fprintf(f2,"%c",114);
																					break;
																					case 19:
																						fprintf(f2,"%c",115);
																						break;
																						case 20:
																							fprintf(f2,"%c",116);
																							break;
																							case 21:
																								fprintf(f2,"%c",117);
																								break;
																								case 22:
																									fprintf(f2,"%c",118);
																									break;
																									case 23:
																										fprintf(f2,"%c",119);
																										break;
																										case 24:
																											fprintf(f2,"%c",120);
																											break;
																											case 25:
																												fprintf(f2,"%c",121);
																												break;
																												case 26:
																													fprintf(f2,"%c",122);
																													break;
																													case 27:
																														fprintf(f2,",");
																														break;
																														case 28:
																															fprintf(f2,".");
																															break;
																														
																														
		}
	}
	fclose(f1);
	fclose(f2);
}
