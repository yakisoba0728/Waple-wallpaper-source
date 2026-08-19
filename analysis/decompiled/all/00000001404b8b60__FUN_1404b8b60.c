// Function: FUN_1404b8b60
// Addr: 1404b8b60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8b60(void)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  byte *pbVar4;
  
  *(char *)(in_RAX + -0x77f9fffc) = *(char *)(in_RAX + -0x77f9fffc) + unaff_BL + in_CF;
  uVar3 = (int)in_RAX + 0x1ea31000;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = *pbVar4;
  uRam0021004b8a70001e = uVar3;
  *pbVar4 = *pbVar4 + (byte)uVar3;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x5c2affe2);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8) + CARRY1(bVar2,(byte)uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

