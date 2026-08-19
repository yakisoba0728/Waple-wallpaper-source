// Function: FUN_14049f22c
// Addr: 14049f22c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f22c(longlong param_1)

{
  int in_EAX;
  uint uVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  uint *puVar2;
  
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + (int)param_1;
  uVar1 = in_EAX + 0x7420b00;
  puVar2 = (uint *)(ulonglong)uVar1;
  if (param_1 == 1 || uVar1 == 0) {
    *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar2 = (byte)*puVar2 + (byte)uVar1;
  *puVar2 = *puVar2 & unaff_EBX;
  *(byte *)puVar2 = (byte)*puVar2 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

