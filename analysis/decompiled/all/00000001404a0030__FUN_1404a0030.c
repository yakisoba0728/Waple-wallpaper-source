// Function: FUN_1404a0030
// Addr: 1404a0030
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a0082) */

void FUN_1404a0030(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  char *in_RAX;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined6 uVar7;
  byte unaff_BL;
  char unaff_SPL;
  longlong unaff_RDI;
  byte *pbVar3;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = (byte)param_2;
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  bVar5 = bVar4 + unaff_BL;
  cVar1 = bVar2 + bVar4 + CARRY1(bVar2,bVar4) + '\x06' + CARRY1(bVar4,unaff_BL);
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *(char *)(unaff_RDI * 9) = *(char *)(unaff_RDI * 9) + cVar1;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar3 = *pbVar3 + cVar1;
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar6;
  bVar2 = cVar1 + '\x03' + CARRY1(bVar2,bVar6);
  cVar1 = bVar2 + bVar5 + '\x03' + CARRY1(bVar2,bVar5);
  *param_1 = *param_1 + -1;
  *(int *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) =
       *(int *)CONCAT62(uVar7,CONCAT11(bVar6,bVar5)) + (int)param_1;
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6 | param_1[CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX
                                                                                  >> 0x10),
                                                                            CONCAT11((char)((
                                                  ulonglong)in_RAX >> 8) + bVar6,cVar1)) >> 8),cVar1
                                                  )],bVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6 | param_1[CONCAT71((int7)(CONCAT62((int6)((ulonglong)
                                                                                        in_RAX >>
                                                                                       0x10),
                                                                                 CONCAT11((char)((
                                                  ulonglong)in_RAX >> 8) + bVar6,cVar1)) >> 8),cVar1
                                                  )],bVar5)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

