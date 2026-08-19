// Function: FUN_14049f2d8
// Addr: 14049f2d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f2d8(longlong param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint in_EAX;
  int iVar3;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  iVar3 = CONCAT31((int3)(in_EAX >> 8),(char)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX)
                  );
  pcVar1 = (char *)(param_2 + param_1);
  *pcVar1 = *pcVar1 + (char)param_2;
  if (param_1 == 1 || *pcVar1 == '\0') {
    *(int *)CONCAT44(in_register_00000004,iVar3) =
         *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

