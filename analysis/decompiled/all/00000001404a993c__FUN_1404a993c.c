// Function: FUN_1404a993c
// Addr: 1404a993c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a993c(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  undefined6 uVar4;
  char *unaff_RBX;
  int unaff_ESP;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)param_2;
  if (in_AL < '\0') {
    piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                    CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
    *piVar1 = *piVar1 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2 + cVar3;
  cVar2 = (char)((ulonglong)param_2 >> 8) + *unaff_RBX;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar2,cVar3)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar2,cVar3)) + cVar3;
  *(int *)((ulonglong)CONCAT61(in_register_00000002,in_AH) << 8) =
       *(int *)((ulonglong)CONCAT61(in_register_00000002,in_AH) << 8) + unaff_ESP;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

