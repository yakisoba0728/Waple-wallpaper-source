// Function: FUN_1404ae5a0
// Addr: 1404ae5a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae5a0(char *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  char cVar11;
  longlong in_RAX;
  ulonglong uVar7;
  undefined7 uVar12;
  uint *puVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  byte *pbVar8;
  char *pcVar10;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  param_1[0x7e40400] = param_1[0x7e40400] + cVar5 + in_CF;
  *(char *)(in_RAX + 0x44) = *(char *)(in_RAX + 0x44) + cVar5;
  uVar7 = unaff_RSI & 0xffffffff;
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)uVar7;
  cVar11 = (char)(uVar7 >> 8);
  *param_1 = *param_1 + cVar11;
  uVar12 = (undefined7)(uVar7 >> 8);
  bVar3 = (char)uVar7 + 2;
  pbVar8 = (byte *)CONCAT71(uVar12,bVar3);
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + bVar3;
  *pbVar8 = *pbVar8 | bVar3;
  uVar4 = in(0x4a);
  *param_1 = *param_1 + '\x13';
  puVar9 = (uint *)(CONCAT71(0xc80013,uVar4) | 6);
  (&stack0x00000000)[(longlong)puVar9 * 8] =
       (&stack0x00000000)[(longlong)puVar9 * 8] + (char)param_1;
  *puVar9 = *puVar9 | (uint)puVar9;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | 0x13;
  cVar5 = in(0xe4);
  pcVar10 = (char *)CONCAT71(0xdc0013,cVar5);
  *param_1 = *param_1;
  *pcVar10 = *pcVar10 + cVar5;
  pcVar10[-0x23ffecbc] = pcVar10[-0x23ffecbc] + unaff_BH;
  bVar6 = in(0xe4);
  puVar9 = (uint *)CONCAT71(0xdc0013,bVar6);
  *param_1 = *param_1;
  *(byte *)puVar9 = (byte)*puVar9 + bVar6;
  pbVar8[-0x47ffecbc] = pbVar8[-0x47ffecbc] + (char)param_2;
  *puVar9 = *puVar9 & (uint)puVar9;
  uVar1 = *puVar9;
  uVar2 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar6;
  if (!SCARRY1((byte)uVar2,bVar6)) {
    pcVar10 = (char *)(ulonglong)((uint)puVar9 + *puVar9 + (uint)CARRY1((byte)uVar1,bVar6));
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - bVar3;
    *param_1 = *param_1 + cVar11;
    *pcVar10 = *pcVar10 + (char)param_1;
    *pbVar8 = *pbVar8 + bVar3;
    cVar5 = in(7);
    pcVar10 = (char *)CONCAT71(uVar12,cVar5);
    *pcVar10 = *pcVar10 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar8[0x28001344] = pbVar8[0x28001344] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

