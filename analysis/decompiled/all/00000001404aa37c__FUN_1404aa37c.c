// Function: FUN_1404aa37c
// Addr: 1404aa37c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa37c(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  uint *unaff_RSI;
  byte in_CF;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [8];
  char *pcVar2;
  
  uRam821700051701004a = (undefined1)in_EAX;
  uVar1 = in_EAX * 2 + (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(uint *)(pcVar2 + 0x10) =
       *(int *)(pcVar2 + 0x10) + (int)auStack_8 +
       (uint)(CARRY4(in_EAX,in_EAX) || CARRY4(in_EAX * 2,(uint)in_CF));
  wrmsr(param_1,CONCAT44(param_2,uVar1));
  *pcVar2 = *pcVar2 + (char)uVar1;
  *unaff_RSI = *unaff_RSI & (uint)auStack_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

