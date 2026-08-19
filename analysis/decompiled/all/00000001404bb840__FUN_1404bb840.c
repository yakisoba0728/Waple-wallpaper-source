// Function: FUN_1404bb840
// Addr: 1404bb840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb840(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char cVar7;
  undefined8 in_RAX;
  byte *pbVar5;
  char *pcVar6;
  char unaff_SPL;
  undefined7 unaff_00000021;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  uint *puVar4;
  
  bVar2 = (char)in_RAX + -0xc + in_CF;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *puVar4 = *puVar4 | (uint)puVar4;
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar2,bVar2));
  puVar4 = (uint *)(CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar2 | *pbVar5) | 0x74);
  uVar3 = (uint)puVar4 | *puVar4;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] =
       param_1[CONCAT71(unaff_00000021,unaff_SPL)] | (byte)(uVar3 >> 8);
  bVar2 = (char)uVar3 + 0x34;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2) | 0x21867000;
  puVar4 = (uint *)(ulonglong)uVar3;
  cVar7 = (char)(uVar3 >> 8);
  unaff_RSI[(longlong)puVar4 * 4 + -0x489fffdf] =
       unaff_RSI[(longlong)puVar4 * 4 + -0x489fffdf] + cVar7;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)puVar4 = (char)*puVar4 + bVar2;
  *(char *)((longlong)puVar4 + -0x7a) =
       *(char *)((longlong)puVar4 + -0x7a) + (char)((ulonglong)param_2 >> 8);
  *puVar4 = *puVar4 & uVar3;
  *unaff_RDI = *unaff_RSI;
  LOCK();
  cVar1 = *param_1;
  *param_1 = cVar7;
  pcVar6 = (char *)(ulonglong)CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar1,bVar2));
  UNLOCK();
  pcVar6[-0x49] = pcVar6[-0x49] + cVar1;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | bVar2;
  *pcVar6 = *pcVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

