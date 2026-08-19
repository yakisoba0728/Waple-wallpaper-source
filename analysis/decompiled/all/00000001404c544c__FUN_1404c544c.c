// Function: FUN_1404c544c
// Addr: 1404c544c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c544c(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESP;
  byte in_CF;
  bool bVar2;
  
  bVar2 = uRam000000019462545c < unaff_ESP;
  uVar1 = uRam000000019462545c - unaff_ESP;
  uRam000000019462545c = uVar1 - in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX + (uint)(bVar2 || uVar1 < in_CF);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

