// Function: FUN_1404ba468
// Addr: 1404ba468
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba468(uint param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  byte *pbVar6;
  char unaff_BL;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  uint *puVar5;
  
  *in_RAX = *in_RAX & (byte)in_RAX;
  bVar3 = *param_4;
  bVar2 = (byte)((ulonglong)in_RAX & 0xffffffffffffffa3);
  *param_4 = *param_4 + bVar2;
  uVar4 = ((int)((ulonglong)in_RAX & 0xffffffffffffffa3) + -0x11d0004) - (uint)CARRY1(bVar3,bVar2);
  puVar5 = (uint *)(ulonglong)uVar4;
  *unaff_RSI = *unaff_RSI;
  *puVar5 = *puVar5 & param_1;
  bVar3 = (char)uVar4 + (char)*puVar5;
  pbVar6 = (byte *)(ulonglong)
                   CONCAT22((short)(uVar4 >> 0x10),
                            CONCAT11((byte)(uVar4 >> 8) | (byte)((ulonglong)param_2 >> 8),bVar3));
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x20,unaff_BL)) + -0x49);
  *pcVar1 = *pcVar1 + unaff_BL;
  *pbVar6 = *pbVar6 & bVar3;
  if (*pbVar6 != 0) {
    in(0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

