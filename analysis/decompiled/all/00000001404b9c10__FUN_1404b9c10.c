// Function: FUN_1404b9c10
// Addr: 1404b9c10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b9c11) overlaps instruction at (ram,0x0001404b9c10)
    */

void FUN_1404b9c10(longlong param_1,undefined1 *param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte *in_RAX;
  uint *puVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  char unaff_BL;
  char *unaff_RSI;
  uint uVar9;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  *(uint *)(unaff_RSI + -0x779ffde) = *(uint *)(unaff_RSI + -0x779ffde) & (uint)in_RAX;
  cVar4 = (byte)in_RAX + *in_RAX;
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  if ((POPCOUNT(cVar4) & 1U) != 0) {
    uVar3 = (uint)CARRY1((byte)in_RAX,*in_RAX);
    uVar2 = *puVar10;
    uVar9 = (uint)puVar10;
    uVar5 = uVar9 + *puVar10;
    uVar8 = uVar5 + uVar3;
    puVar10 = (uint *)(ulonglong)uVar8;
    if (!CARRY4(uVar9,uVar2) && !CARRY4(uVar5,uVar3)) goto code_r0x0001404b9c1e;
    *(char *)puVar10 = (char)*puVar10 + (char)uVar8;
    *(byte *)((longlong)puVar10 + -0x7766ffe1) = *(byte *)((longlong)puVar10 + -0x7766ffe1) | 0x1f;
    *unaff_RSI = *unaff_RSI + cVar12;
  }
  bVar7 = *param_4;
  bVar6 = (byte)puVar10;
  *param_4 = *param_4 + bVar6;
  bVar7 = bVar6 + 3 + CARRY1(bVar7,bVar6);
  pcVar1 = (char *)(param_1 + CONCAT71((int7)((ulonglong)puVar10 >> 8),bVar7));
  *pcVar1 = *pcVar1 + cVar11;
  LOCK();
  *param_2 = (char)((ulonglong)puVar10 >> 8);
  UNLOCK();
  unaff_RSI[0x7a0012f8] = unaff_RSI[0x7a0012f8] + (bVar7 | 0x60);
  func_0x000118bd9c31();
code_r0x0001404b9c1e:
  pcVar1 = (char *)(CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + -0x58);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

