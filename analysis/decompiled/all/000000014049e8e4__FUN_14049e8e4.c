// Function: FUN_14049e8e4
// Addr: 14049e8e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e8e4(undefined8 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 uVar3;
  
  uRam210049e7f00000ec = in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x5cffff14);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  cVar2 = in(param_2);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

