// Function: FUN_1404a8268
// Addr: 1404a8268
// Size: 1 bytes


void FUN_1404a8268(byte *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar6;
  int *piVar4;
  char *pcVar5;
  char unaff_BL;
  char *unaff_RDI;
  undefined8 unaff_retaddr;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 | 0xa0021;
  bVar1 = (byte)((ulonglong)unaff_retaddr >> 8);
  piVar4 = (int *)CONCAT62((int6)((ulonglong)unaff_retaddr >> 0x10),
                           CONCAT11(bVar1 + bVar6,(char)unaff_retaddr));
  iVar2 = ((int)piVar4 - *piVar4) - (uint)CARRY1(bVar1,bVar6);
  bVar1 = (byte)((uint)iVar2 >> 8);
  bVar6 = bVar1 + (byte)param_2;
  bVar1 = (char)iVar2 - CARRY1(bVar1,(byte)param_2);
  uVar3 = (CONCAT22((short)((uint)iVar2 >> 0x10),CONCAT11(bVar6 + bVar1,bVar1)) + -0x1e640000) -
          (uint)CARRY1(bVar6,bVar1);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (byte)uVar3;
  pcVar5 = (char *)((ulonglong)(CONCAT31((int3)(uVar3 >> 8),((byte)uVar3 ^ 0x1f) * '\x02') | 0xb) |
                   0xb);
  pcVar5[-0x7f] = pcVar5[-0x7f] + unaff_BL;
  bVar1 = *param_1;
  bVar6 = (byte)pcVar5;
  *param_1 = *param_1 + bVar6;
  *unaff_RDI = (*unaff_RDI - bVar6) - CARRY1(bVar1,bVar6);
  *pcVar5 = *pcVar5 + unaff_BL;
  return;
}

