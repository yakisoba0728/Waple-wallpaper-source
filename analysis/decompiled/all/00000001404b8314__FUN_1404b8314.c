// Function: FUN_1404b8314
// Addr: 1404b8314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8343) overlaps instruction at (ram,0x0001404b8341)
    */

void FUN_1404b8314(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int in_EAX;
  uint uVar3;
  byte *pbVar5;
  uint *puVar6;
  byte bVar7;
  byte bVar8;
  undefined4 unaff_EBX;
  uint unaff_EDI;
  char *pcVar4;
  
  bVar8 = (byte)((uint)unaff_EBX >> 8);
  uVar3 = (in_EAX + -0x4b820800) - (uint)((byte)((uint)in_EAX >> 8) < bVar8);
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *param_2 = *param_2 | (byte)uVar3;
  *pcVar4 = *pcVar4 + (char)param_1;
  if (*pcVar4 == '\0') {
    pcVar4[-0x58] = pcVar4[-0x58] + (byte)uVar3;
  }
  bVar1 = *param_2;
  bVar7 = (byte)unaff_EBX;
  *param_2 = *param_2 + bVar7;
  uVar3 = (uVar3 + 0xe202e100) - (uint)CARRY1(bVar1,bVar7);
  pcVar4 = (char *)(ulonglong)uVar3;
  param_2[(longlong)pcVar4 * 4] = param_2[(longlong)pcVar4 * 4] + bVar8;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + (char)uVar3;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar7;
  uVar3 = (uVar3 + 0xe202e100) - (uint)CARRY1(bVar1,bVar7);
  pbVar5 = (byte *)(ulonglong)uVar3;
  param_2[(longlong)pbVar5 * 4] = param_2[(longlong)pbVar5 * 4] + bVar8;
  *param_4 = *param_4 + (byte)uVar3;
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(pbVar5 + -0x58) = uVar2;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *pbVar5);
  puVar6 = (uint *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)(unaff_EDI & *(uint *)((longlong)puVar6 + 0xd));
  *pcVar4 = *pcVar4 + bVar7;
  *puVar6 = *puVar6 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

