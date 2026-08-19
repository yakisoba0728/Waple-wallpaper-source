// Function: FUN_1404bbde4
// Addr: 1404bbde4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbde4(byte *param_1,uint *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte bVar6;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  uVar4 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,(char)in_RAX)) &
          *param_2;
  cVar2 = (char)uVar4;
  uVar5 = (ulonglong)
          CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) + cVar2,cVar2)
                                  ) >> 8),cVar2) & 0xffffffffffffff02;
  bVar6 = (byte)(uVar5 >> 8);
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + bVar6;
  unaff_RSI[2] = unaff_RSI[2] + (char)param_2;
  bVar6 = bVar6 & bRam0000000167c3be1c;
  bVar3 = (byte)uVar5 & *(byte *)CONCAT62((int6)(uVar5 >> 0x10),CONCAT11(bVar6,(byte)uVar5));
  puVar1 = (undefined1 *)(unaff_RBX + 0x84a0100 + (longlong)param_1 * 2);
  *puVar1 = *puVar1;
  if (bVar3 != 0) {
    *(char *)(unaff_RBP + 100) = *(char *)(unaff_RBP + 100) + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI << 1 | (char)*unaff_RSI < '\0';
  *param_1 = *param_1 ^ bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

