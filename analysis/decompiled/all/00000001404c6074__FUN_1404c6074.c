// Function: FUN_1404c6074
// Addr: 1404c6074
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c6081) overlaps instruction at (ram,0x0001404c6080)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c6081) */

void FUN_1404c6074(char *param_1,uint *param_2,byte param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar9;
  uint *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar8;
  
  uVar5 = in_EAX | 0x7f00932;
  *param_2 = *param_2 & (uint)param_1;
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  uVar5 = uVar5 + 0xc0000864;
  *(byte *)unaff_RBX = (char)*unaff_RBX + ((byte)uVar5 | 0x2f);
  uVar6 = uVar5 | 0x5f9c002f;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  bVar2 = (char)uVar6 * '\x02';
  *(byte *)unaff_RBX = (char)*unaff_RBX + (bVar2 | 0x2f);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar2) | 0x5f9c002f;
  *param_1 = *param_1 + unaff_R12B;
  cVar3 = (char)uVar6;
  *(char *)((ulonglong)uVar6 * 2) = *(char *)((ulonglong)uVar6 * 2) + cVar3;
  cVar4 = (char)(uVar5 >> 8) * '\x02';
  uVar5 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar4,cVar3));
  puVar7 = (uint *)(ulonglong)uVar5;
  *puVar7 = *puVar7 | uVar5;
  *(char *)((longlong)puVar7 + (longlong)param_1) =
       *(char *)((longlong)puVar7 + (longlong)param_1) + cVar4;
  puVar1 = (undefined1 *)(unaff_RDI + CONCAT44(unaff_0000002c,unaff_EBP));
  *puVar1 = *puVar1;
  pbVar9 = (byte *)(ulonglong)((uint)param_1 + iRam000000019fe860e9);
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + param_3;
  cVar4 = cVar3 + '\x01' + CARRY1(bVar2,param_3);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  *(char *)param_2 = (char)*param_2 + (char)param_2;
  *pcVar8 = *pcVar8 + cVar4;
  *unaff_RBX = *unaff_RBX & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

