// Function: FUN_1404ae5b8
// Addr: 1404ae5b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae5b8(char *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 in_RAX;
  uint *puVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *pcVar9;
  longlong unaff_RDI;
  byte *pbVar6;
  char *pcVar8;
  
  bVar3 = (char)in_RAX - 0x2c;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *pbVar6 = *pbVar6 | bVar3;
  pcVar9 = (char *)((ulonglong)pbVar6 & 0xffffffff);
  uVar4 = in(0x4a);
  *param_1 = *param_1 + '\x13';
  puVar7 = (uint *)(CONCAT71(0xc80013,uVar4) | 6);
  (&stack0x00000000)[(longlong)puVar7 * 8] =
       (&stack0x00000000)[(longlong)puVar7 * 8] + (char)param_1;
  *puVar7 = *puVar7 | (uint)puVar7;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] | 0x13;
  cVar5 = in(0xe4);
  pcVar8 = (char *)CONCAT71(0xdc0013,cVar5);
  *param_1 = *param_1;
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8[-0x23ffecbc] = pcVar8[-0x23ffecbc] + unaff_BH;
  bVar3 = in(0xe4);
  puVar7 = (uint *)CONCAT71(0xdc0013,bVar3);
  *param_1 = *param_1;
  *(byte *)puVar7 = (byte)*puVar7 + bVar3;
  pcVar9[-0x47ffecbc] = pcVar9[-0x47ffecbc] + param_2;
  *puVar7 = *puVar7 & (uint)puVar7;
  uVar1 = *puVar7;
  uVar2 = *puVar7;
  *(byte *)puVar7 = (byte)*puVar7 + bVar3;
  if (!SCARRY1((byte)uVar2,bVar3)) {
    pcVar8 = (char *)(ulonglong)((uint)puVar7 + *puVar7 + (uint)CARRY1((byte)uVar1,bVar3));
    *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - (char)pcVar9;
    *param_1 = *param_1 + (char)((ulonglong)pcVar9 >> 8);
    *pcVar8 = *pcVar8 + (char)param_1;
    *pcVar9 = *pcVar9 + (char)pcVar9;
    cVar5 = in(7);
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),cVar5);
    *pcVar8 = *pcVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9[0x28001344] = pcVar9[0x28001344] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

