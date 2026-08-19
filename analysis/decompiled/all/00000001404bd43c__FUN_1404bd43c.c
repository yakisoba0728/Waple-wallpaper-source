// Function: FUN_1404bd43c
// Addr: 1404bd43c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd43c(char param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  char in_CF;
  int iVar2;
  
  cVar1 = ((char)in_EAX + '-') - in_CF;
  iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *param_4 = *param_4 + cVar1;
  LocalDescriptorTableRegister
            (*(undefined2 *)(CONCAT44(in_register_00000004,iVar2) + unaff_RBP * 8));
  *(char *)(param_2 + -0x28) = *(char *)(param_2 + -0x28) + param_1;
  *(int *)CONCAT44(in_register_00000004,iVar2) =
       *(int *)CONCAT44(in_register_00000004,iVar2) + iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

