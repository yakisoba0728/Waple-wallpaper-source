// Function: FUN_1404c8180
// Addr: 1404c8180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8180(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  byte *pbVar4;
  char *pcVar5;
  char unaff_BL;
  longlong unaff_RDI;
  undefined7 uVar6;
  
  bVar3 = in(0x31);
  *(char *)(unaff_RDI + 0x74) = *(char *)(unaff_RDI + 0x74) + unaff_BL;
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) |
                                     (byte)((ulonglong)param_2 >> 8),bVar3));
  *pbVar4 = *pbVar4 ^ bVar3;
  cVar2 = cRam900031200a00311f;
  uVar6 = (undefined7)((ulonglong)pbVar4 >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cRam900031200a00311f);
  puVar1 = (undefined1 *)((longlong)pcVar5 * 2 + 0x21);
  *puVar1 = *puVar1;
  *pcVar5 = *pcVar5 + cVar2;
  pbVar4 = (byte *)(CONCAT71(uVar6,cRam900031200a00311f) * 2 + 0x19);
  *pbVar4 = *pbVar4 | 0x1a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

