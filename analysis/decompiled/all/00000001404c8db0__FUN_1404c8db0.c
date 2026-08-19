// Function: FUN_1404c8db0
// Addr: 1404c8db0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c8e4d) overlaps instruction at (ram,0x0001404c8e4c)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c8e4b) */
/* WARNING: Removing unreachable block (ram,0x0001404c8e80) */

void FUN_1404c8db0(char *param_1,undefined2 param_2)

{
  undefined3 uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char *in_RAX;
  char unaff_BL;
  char unaff_BH;
  char cVar9;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  undefined1 auStack_8 [8];
  uint *puVar7;
  byte *pbVar8;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  uRam0000000124718dc4 = uRam0000000124718dc4 & (uint)&stack0x00000000;
  uVar6 = (int)in_RAX + 0x6c42000;
  puVar7 = (uint *)(ulonglong)uVar6;
  *param_1 = *param_1 + unaff_BL;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  if (*param_1 == '\0') {
    unaff_BH = unaff_BH + cVar9;
  }
  else {
    *param_1 = *param_1 + (char)param_2;
    uVar6 = (uVar6 | *(uint *)(in_FS_OFFSET + (longlong)puVar7)) + 0xd0000a54;
    puVar7 = (uint *)(ulonglong)uVar6;
    out(*unaff_RSI,param_2);
    *puVar7 = *puVar7 ^ uVar6;
    out(param_2,uVar6);
    unaff_RSI = unaff_RSI + 1;
  }
  out(*unaff_RSI,param_2);
  *puVar7 = *puVar7 ^ (uint)puVar7;
  uVar6 = (int)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + (char)*puVar7) + 0xef0004f4;
  puVar7 = (uint *)(ulonglong)uVar6;
  out(unaff_RSI[1],param_2);
  *puVar7 = *puVar7 ^ uVar6;
  uVar1 = (undefined3)(uVar6 >> 8);
  uVar6 = CONCAT31(uVar1,*(undefined1 *)
                          (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                          ((ulonglong)puVar7 & 0xff)));
  out(*(undefined4 *)(unaff_RSI + 2),param_2);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 ^ uVar6;
  bVar3 = in(0x8c);
  puVar7 = (uint *)(ulonglong)CONCAT31(uVar1,bVar3);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar7 = (char)*puVar7 + bVar3;
  cVar9 = unaff_BH + cVar9;
  out(unaff_RSI[6],param_2);
  *puVar7 = *puVar7 ^ CONCAT31(uVar1,bVar3);
  uVar6 = CONCAT31(uVar1,*(undefined1 *)
                          (CONCAT62(unaff_0000001a,CONCAT11(cVar9,unaff_BL)) + (ulonglong)bVar3));
  out(*(undefined4 *)(unaff_RSI + 7),param_2);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 ^ uVar6;
  cVar4 = in(0x8c);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)CONCAT31(uVar1,cVar4) = *(char *)(ulonglong)CONCAT31(uVar1,cVar4) + cVar4;
  cVar4 = cVar4 + (char)param_2;
  uVar6 = CONCAT31(uVar1,cVar4);
  puVar7 = (uint *)(ulonglong)uVar6;
  out(unaff_RSI[0xb],param_2);
  *puVar7 = *puVar7 ^ uVar6;
  out(param_2,uVar6);
  out(unaff_RSI[0xc],param_2);
  *puVar7 = *puVar7 ^ uVar6;
  iVar2 = CONCAT31(uVar1,cVar4 + (char)*puVar7);
  if (!SCARRY4(iVar2,-0x6ffff9cc)) {
    if (SCARRY1(cVar9,cVar9)) {
      (&stack0x00000043)[unaff_RBP * 8] = (&stack0x00000043)[unaff_RBP * 8] + (char)param_1;
      *param_1 = *param_1 + (char)(iVar2 + -0x6ffff9cc);
      uVar6 = iVar2 + 0x5bd30631;
      *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
      bVar5 = (char)uVar6 + 2;
      pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar5);
      bVar3 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      *(uint *)(unaff_RSI + 0xd) =
           (*(int *)(unaff_RSI + 0xd) - (int)auStack_8) - (uint)CARRY1(bVar3,bVar5);
      *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (&stack0x0000004b)[unaff_RBP * 8] = (&stack0x0000004b)[unaff_RBP * 8] + (char)param_1;
    *param_1 = *param_1 + (char)((uint)(iVar2 + -0x6ffff9cc) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

