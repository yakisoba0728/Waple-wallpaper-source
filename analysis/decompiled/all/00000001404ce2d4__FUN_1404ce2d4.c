// Function: FUN_1404ce2d4
// Addr: 1404ce2d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce2d4(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BH;
  byte *pbVar3;
  
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX)) + 0x6c40000;
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  *pbVar3 = *pbVar3 + bVar1;
  if (*pbVar3 != 0) {
    *pbVar3 = *pbVar3 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar3 = *pbVar3 + unaff_BH;
  *pbVar3 = *pbVar3 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

