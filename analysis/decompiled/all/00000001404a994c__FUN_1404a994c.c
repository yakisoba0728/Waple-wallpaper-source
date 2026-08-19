// Function: FUN_1404a994c
// Addr: 1404a994c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a994c(char *param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  char cVar2;
  undefined6 uVar3;
  char *unaff_RBX;
  int unaff_ESP;
  char in_CF;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar1 = (char)param_2;
  cVar2 = (char)((ulonglong)param_2 >> 8) + *unaff_RBX + in_CF;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,cVar1)) + cVar1;
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + unaff_ESP;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

