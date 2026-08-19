// Function: FUN_1404d5f28
// Addr: 1404d5f28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d5f49) overlaps instruction at (ram,0x0001404d5f47)
    */

void FUN_1404d5f28(uint param_1,longlong param_2,char param_3,char *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  byte bVar9;
  ulonglong in_RAX;
  int *piVar8;
  char cVar10;
  byte bVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_retaddr;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)(in_RAX >> 8);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + bVar9;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + bVar11;
  *(char *)(in_RAX - 0x4d) = *(char *)(in_RAX - 0x4d) + (char)in_RAX;
  cVar10 = (char)param_1;
  *(char *)(unaff_RSI + 0x180036b3) = *(char *)(unaff_RSI + 0x180036b3) + cVar10;
  cVar6 = *param_4;
  *param_4 = *param_4 + param_3;
  if (*param_4 != '\0' && SCARRY1(cVar6,param_3) == *param_4 < '\0') {
    *(char *)(unaff_retaddr + -3) = *(char *)(unaff_retaddr + -3) + unaff_BH;
    out(*unaff_retaddr,(short)param_2);
    cVar6 = in(0x11);
    pcVar5 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar6);
    pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x34);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    *pcVar5 = *pcVar5 + cVar6 + CARRY1(bVar3,bVar9);
    *(byte *)(param_2 + 0x60037004) = *(byte *)(param_2 + 0x60037004) | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar8 = (int *)(in_RAX ^ 0x10);
  iVar7 = *piVar8;
  *(char *)piVar8 = (char)*piVar8 + cVar10;
  if (!SCARRY1((char)iVar7,cVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = unaff_retaddr + -0x2dc7ffd;
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + param_1;
  iVar7 = (int)piVar8 + *piVar8 + (uint)CARRY4(uVar4,param_1);
  uVar4 = CONCAT22((short)((uint)iVar7 >> 0x10),
                   CONCAT11((char)((uint)iVar7 >> 8) + '\x12',(char)iVar7));
  pbVar1 = (byte *)(unaff_RBP + 0x74);
  bVar9 = *pbVar1;
  bVar11 = (byte)(param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar11;
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)CARRY1(bVar9,bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

