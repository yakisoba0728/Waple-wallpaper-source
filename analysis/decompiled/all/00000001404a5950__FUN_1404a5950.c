// Function: FUN_1404a5950
// Addr: 1404a5950
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a596b) overlaps instruction at (ram,0x0001404a5969)
    */

void FUN_1404a5950(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  byte bVar3;
  char in_AL;
  byte bVar4;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char cVar5;
  char unaff_SPL;
  int unaff_EDI;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + unaff_EDI;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x58);
  cVar5 = (char)param_2;
  *pcVar1 = *pcVar1 + cVar5;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  bVar4 = in_AL + (char)((ulonglong)param_2 >> 8);
  if ((char)bVar4 < '\0') {
    *param_1 = *param_1 + bVar4;
  }
  else {
    *param_1 = *param_1 + bVar4;
    if (-1 < (char)*param_1) {
      *param_1 = *param_1 + cVar5;
      halt_baddata();
    }
  }
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) + 0x58);
  *pcVar1 = *pcVar1 + cVar5;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar4;
  piVar2 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) +
                  CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))
                          ));
  *piVar2 = *piVar2 + CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)) +
            (uint)CARRY1(bVar3,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

