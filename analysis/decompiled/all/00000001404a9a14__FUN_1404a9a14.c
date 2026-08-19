// Function: FUN_1404a9a14
// Addr: 1404a9a14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9a14(char *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  char in_AL;
  char cVar5;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  
  bVar4 = in_AL + 0x67;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + bVar4;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + bVar4;
  piVar2 = (int *)(in_FS_OFFSET +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))
                          ));
  *piVar2 = *piVar2 + CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)) +
            (uint)CARRY1(bVar3,bVar4);
  cVar5 = bVar4 + (byte)param_2;
  piVar2 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))
                          ));
  *piVar2 = *piVar2 + -1;
  cVar5 = (cVar5 + 'g') - CARRY1(bVar4,(byte)param_2);
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))));
  *pcVar1 = *pcVar1 + cVar5;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + in_AH;
  param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))] =
       param_2[CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5)))]
       + (char)((ulonglong)param_2 >> 8);
  cVar5 = cVar5 * '\x02';
  piVar2 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar5))
                          ));
  *piVar2 = *piVar2 + -1;
  *param_1 = *param_1 + cVar5 + 'g';
  *unaff_RDI = *unaff_RDI + (char)param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

