// Function: FUN_1404d7284
// Addr: 1404d7284
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d732c) overlaps instruction at (ram,0x0001404d732b)
    */
/* WARNING: Removing unreachable block (ram,0x0001404d72ef) */
/* WARNING: Removing unreachable block (ram,0x0001404d7354) */
/* WARNING: Removing unreachable block (ram,0x0001404d72bb) */
/* WARNING: Removing unreachable block (ram,0x0001404d72df) */
/* WARNING: Removing unreachable block (ram,0x0001404d733c) */
/* WARNING: Removing unreachable block (ram,0x0001404d7307) */

void FUN_1404d7284(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte bVar8;
  char *pcVar6;
  uint *puVar7;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  int unaff_EBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  pcVar6 = (char *)func_0x0001b1a172ca();
  *param_4 = *param_4 + unaff_R12B;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *unaff_RSI = *unaff_RSI + bVar10;
  pcVar6 = (char *)func_0x000128ec72d6();
  param_1[(longlong)unaff_RSI * 2 + 0x4d] = param_1[(longlong)unaff_RSI * 2 + 0x4d] + bVar10;
  cVar4 = (char)((ulonglong)pcVar6 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  pcVar6[0x160040e7] = pcVar6[0x160040e7] + cVar4;
  puVar7 = (uint *)func_0x0001b18972ea();
  *param_4 = *param_4 + in_R11B;
  pcVar6 = (char *)(ulonglong)((uint)param_1 & *puVar7);
  *pcVar6 = *pcVar6 + bVar10;
  iRam00000001493d7cb7 = iRam00000001493d7cb7 + unaff_EBX;
  pbVar9 = (byte *)(pcVar6 + -1);
  if (pbVar9 != (byte *)0x0 && iRam00000001493d7cb7 != 0) {
    *(byte *)puVar7 = (byte)*puVar7 ^ (byte)((ulonglong)puVar7 >> 8);
    *unaff_RSI = *unaff_RSI >> 1;
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + bVar10);
  }
  *(byte *)puVar7 = (byte)*puVar7 << 3 | (byte)*puVar7 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  uVar3 = *puVar7;
  cVar4 = ((byte)puVar7 & bVar10) + bVar10;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)puVar7 >> 8),cVar4);
  *pcVar6 = *pcVar6 + cVar4;
  bVar10 = *pbVar9;
  bVar8 = (byte)((ulonglong)puVar7 >> 8);
  *pbVar9 = *pbVar9 + bVar8;
  uVar1 = (uint)CARRY1(bVar10,bVar8);
  uVar2 = (uint)pcVar6 + 0xd4150004;
  iVar5 = uVar2 + uVar1;
  *unaff_RDI = *unaff_RDI | cVar11 + (byte)uVar3;
  unaff_RDI[CONCAT31((int3)((uint)iVar5 >> 8),
                     (char)iVar5 - (0x2beafffb < (uint)pcVar6 || CARRY4(uVar2,uVar1)))] =
       unaff_RDI[CONCAT31((int3)((uint)iVar5 >> 8),
                          (char)iVar5 - (0x2beafffb < (uint)pcVar6 || CARRY4(uVar2,uVar1)))] &
       (byte)pbVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

