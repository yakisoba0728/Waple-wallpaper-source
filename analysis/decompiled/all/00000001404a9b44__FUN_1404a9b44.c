// Function: FUN_1404a9b44
// Addr: 1404a9b44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9b44(char *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  uint *puVar5;
  byte bVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  bVar6 = (byte)param_1;
  param_1[in_RAX] = param_1[in_RAX] + (char)((ulonglong)param_2 >> 8);
  *unaff_RDI = *unaff_RDI + bVar6;
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                         (char)in_RAX + (char)((ulonglong)in_RAX >> 8)) & 0x1550000d;
  *param_1 = *param_1 + unaff_SPL;
  bVar3 = (byte)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + bVar3;
  *unaff_RDI = *unaff_RDI + bVar6;
  puVar5 = (uint *)(ulonglong)uVar4;
  *param_1 = *param_1 + bVar3;
  *param_2 = *param_2 | bVar3;
  *(byte *)puVar5 = (byte)*puVar5 + bVar6;
  pbVar1 = (byte *)((longlong)puVar5 + unaff_RSI * 2);
  *pbVar1 = *pbVar1 << (bVar6 & 7) | *pbVar1 >> 8 - (bVar6 & 7);
  *puVar5 = *puVar5 & unaff_EBX;
  *(byte *)puVar5 = (byte)*puVar5 | bVar3;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(-bVar3,bVar3));
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(bVar3 | *(byte *)(ulonglong)uVar4) + 100);
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  cVar2 = ((byte)uVar4 | 0x34) * '\x02';
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2) | 0xde6e500;
  param_2[CONCAT44(unaff_0000001c,unaff_EBX) * 4 + 0x421004a] =
       param_2[CONCAT44(unaff_0000001c,unaff_EBX) * 4 + 0x421004a] + (char)param_2;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2 + *(char *)(ulonglong)uVar4 + -0x2c);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  in(0x26);
  param_2[CONCAT44(unaff_0000001c,unaff_EBX) * 4 + 0xb21004a] =
       param_2[CONCAT44(unaff_0000001c,unaff_EBX) * 4 + 0xb21004a] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

