// Function: FUN_1404c3758
// Addr: 1404c3758
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c3774) overlaps instruction at (ram,0x0001404c3773)
    */

void FUN_1404c3758(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar10;
  int *in_RAX;
  int *piVar8;
  char *pcVar9;
  uint *puVar11;
  int iVar12;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool bVar13;
  undefined1 auStack_8 [8];
  uint *puVar6;
  uint *puVar7;
  
  iVar12 = (int)param_2 + *(int *)(param_2 * 2) + (uint)in_CF;
  cVar2 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       (char)iVar12;
  pcVar9 = (char *)CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),0xf);
  puVar11 = (uint *)(param_1 + -1);
  if (puVar11 != (uint *)0x0 &&
      *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) != '\0'
     ) {
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar2,(char)iVar12)) {
    *(char *)((longlong)in_RAX + -0x49) =
         *(char *)((longlong)in_RAX + -0x49) + (char)((ulonglong)in_RAX >> 8);
    uVar3 = (int)in_RAX - *in_RAX;
    puVar6 = (uint *)(ulonglong)uVar3;
    *puVar6 = *puVar6 + uVar3;
    *(char *)puVar6 = (char)*puVar6 + (char)uVar3;
    *(uint *)(param_1 + -0x56daffd6) = *(uint *)(param_1 + -0x56daffd6) | unaff_EBP;
    uVar4 = uVar3 - *puVar6;
    puVar7 = (uint *)(ulonglong)uVar4;
    bVar10 = (byte)((uint)iVar12 >> 8);
    *pcVar9 = *pcVar9 + bVar10 + (uVar3 < *puVar6);
    *(byte *)((longlong)puVar7 * 2) = *(byte *)((longlong)puVar7 * 2) | (byte)uVar4;
    pcVar9[4] = pcVar9[4] | bVar10;
    uVar3 = CONCAT22((short)((uint)iVar12 >> 0x10),CONCAT11(bVar10 + (char)*puVar7,0xf));
    *puVar11 = *puVar11 | CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    uVar5 = uVar4 + *puVar7;
    uVar5 = uVar5 + 0x301470 + (uint)(uVar3 < uVar5 || uVar3 - uVar5 < (uint)CARRY4(uVar4,*puVar7));
    pcVar9 = (char *)((longlong)(ulonglong)uVar5 + -0x49);
    *pcVar9 = *pcVar9 + (char)(uVar5 >> 8);
    uVar5 = uVar5 - *(int *)(ulonglong)uVar5;
    piVar8 = (int *)(ulonglong)uVar5;
    *piVar8 = *piVar8 + uVar5;
    *(char *)piVar8 = (char)*piVar8 + (char)uVar5;
    bVar10 = (byte)(uVar5 >> 8);
    *(char *)((longlong)piVar8 + 0x31) = *(char *)((longlong)piVar8 + 0x31) + bVar10;
    bVar13 = CARRY1(bRam00000000d5002ba8,bVar10);
    bRam00000000d5002ba8 = bRam00000000d5002ba8 + bVar10;
    puVar11 = (uint *)((longlong)piVar8 * 2);
    uVar3 = *puVar11;
    uVar4 = *puVar11;
    *puVar11 = uVar4 + uVar5 + (uint)bVar13;
    *(uint *)(unaff_RDI + (longlong)piVar8) =
         *(int *)(unaff_RDI + (longlong)piVar8) + (int)auStack_8 +
         (uint)(CARRY4(uVar3,uVar5) || CARRY4(uVar4 + uVar5,(uint)bVar13));
    uVar3 = (uVar5 + 0x80000654) - *(int *)(ulonglong)(uVar5 + 0x80000654);
    pcVar9 = (char *)(ulonglong)uVar3;
    *param_4 = *param_4 + (char)auStack_8;
    cVar2 = (char)uVar3;
    *pcVar9 = *pcVar9 + cVar2;
    pcVar9[-0x61ffd447] = pcVar9[-0x61ffd447] + cVar2;
    *param_4 = *param_4 + cVar2;
    *unaff_RDI = *unaff_RDI + '+';
    uVar1 = TaskRegister();
    *(undefined2 *)(unaff_RDI + in_FS_OFFSET) = uVar1;
    *unaff_RDI = *unaff_RDI + '+';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

