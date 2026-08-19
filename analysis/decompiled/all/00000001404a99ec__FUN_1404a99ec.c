// Function: FUN_1404a99ec
// Addr: 1404a99ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a99ec(char *param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  byte in_AL;
  char cVar6;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar7;
  byte bVar8;
  char unaff_SPL;
  uint unaff_ESI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  bVar8 = (byte)param_2;
  iRam00000001125799f4 = iRam00000001125799f4 + (int)param_1;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x21);
  *puVar1 = *puVar1 | unaff_ESI;
  bVar4 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar7 = (byte)param_1;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + bVar7;
  piVar3 = (int *)(in_FS_OFFSET +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ));
  *piVar3 = *piVar3 + CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) +
            (uint)CARRY1(bVar4,bVar7);
  cVar6 = in_AL + bVar8;
  piVar3 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))
                          ));
  *piVar3 = *piVar3 + -1;
  cVar6 = (cVar6 + 'g') - CARRY1(in_AL,bVar8);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))
       + cVar6;
  cVar6 = cVar6 * '\x02';
  piVar3 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))
                          ));
  *piVar3 = *piVar3 + -1;
  bVar5 = cVar6 + 0x67;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + bVar5;
  bVar4 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)))
       + bVar5;
  piVar3 = (int *)(in_FS_OFFSET +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5))
                          ));
  *piVar3 = *piVar3 + CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar5)) +
            (uint)CARRY1(bVar4,bVar5);
  cVar6 = bVar5 + bVar8;
  piVar3 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))
                          ));
  *piVar3 = *piVar3 + -1;
  cVar6 = (cVar6 + 'g') - CARRY1(bVar5,bVar8);
  *param_1 = *param_1 + unaff_SPL;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))));
  *pcVar2 = *pcVar2 + cVar6;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + in_AH;
  param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))] =
       param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6)))]
       + (char)((ulonglong)param_2 >> 8);
  cVar6 = cVar6 * '\x02';
  piVar3 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar6))
                          ));
  *piVar3 = *piVar3 + -1;
  *param_1 = *param_1 + cVar6 + 'g';
  *unaff_RDI = *unaff_RDI + bVar7;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

