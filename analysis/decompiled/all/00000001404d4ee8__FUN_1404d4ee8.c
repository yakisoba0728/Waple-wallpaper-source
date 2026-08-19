// Function: FUN_1404d4ee8
// Addr: 1404d4ee8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4ee8(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  uint unaff_ESP;
  byte in_CF;
  int *piVar2;
  
  uVar1 = (in_EAX - unaff_ESP) - (uint)in_CF;
  piVar2 = (int *)(ulonglong)uVar1;
  *piVar2 = *piVar2 + uVar1 + (uint)(in_EAX < unaff_ESP || in_EAX - unaff_ESP < (uint)in_CF);
  *(byte *)((longlong)piVar2 + param_2) =
       *(byte *)((longlong)piVar2 + param_2) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

