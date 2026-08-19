// Function: FUN_1404ad9a8
// Addr: 1404ad9a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad9a8(void)

{
  char *pcVar1;
  undefined8 in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + -0x43ffedd5);
  *pcVar1 = *pcVar1 + (char)(((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x34) +
                             -0x122b9000) - (uint)(0xcb < (byte)in_RAX) >> 8);
  uRam000000013467d9c4 = uRam000000013467d9c4 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

