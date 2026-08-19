// Function: FUN_1404a8704
// Addr: 1404a8704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a871e) overlaps instruction at (ram,0x0001404a871c)
    */

void FUN_1404a8704(longlong param_1,undefined1 *param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  undefined8 in_RAX;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  char cVar10;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  int *unaff_RDI;
  uint *puVar5;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined7)((ulonglong)param_1 >> 8);
  uVar7 = (undefined1)param_1;
  *(byte *)(unaff_RBP + param_1) = *(byte *)(unaff_RBP + param_1) | (byte)param_2;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x34) + 0xb751000 +
          (uint)(0xcb < (byte)in_RAX);
  puVar5 = (uint *)(ulonglong)uVar4;
  cVar6 = (char)(uVar4 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar6;
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) == '\0') {
    *(byte *)puVar5 = (byte)*puVar5 + unaff_BL;
    LOCK();
    uVar8 = *param_2;
    *param_2 = uVar7;
    UNLOCK();
    *puVar5 = *puVar5 & uVar4;
    uVar2 = *puVar5;
    *(byte *)puVar5 = (byte)*puVar5 + (byte)uVar4;
    *(char *)(unaff_RBP + 0xb) =
         *(char *)(unaff_RBP + 0xb) + cVar10 + CARRY1((byte)uVar2,(byte)uVar4);
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar6;
    uVar7 = uVar8;
    if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') goto code_r0x0001404a872e;
  }
  else {
    puVar5 = (uint *)(ulonglong)(uVar4 | *puVar5);
  }
  *(byte *)puVar5 = (byte)*puVar5 + unaff_BL;
  LOCK();
  uVar8 = *param_2;
  *param_2 = uVar7;
  UNLOCK();
  *puVar5 = *puVar5 & (uint)puVar5;
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),
                            CONCAT11((char)((ulonglong)puVar5 >> 8) + cVar10,
                                     (byte)puVar5 | (byte)*puVar5));
code_r0x0001404a872e:
  bVar3 = (byte)puVar5 | (byte)*puVar5;
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)puVar5 >> 0x10),
                            CONCAT11((char)((ulonglong)puVar5 >> 8) + bVar3,bVar3));
  uVar4 = (uint)puVar5 | *puVar5;
  (&stack0x00000000)[CONCAT71(uVar9,uVar8)] = (&stack0x00000000)[CONCAT71(uVar9,uVar8)] + cVar10;
  pcVar1 = (char *)(unaff_RBP + CONCAT71(uVar9,uVar8));
  *pcVar1 = *pcVar1 + (byte)param_2;
  param_2[0xb751000] = param_2[0xb751000] + cVar10;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)(uVar4 >> 8);
  if (*(char *)CONCAT71(unaff_00000019,unaff_BL) == '\0') {
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + unaff_BL;
    LOCK();
    *param_2 = uVar8;
    UNLOCK();
    *unaff_RDI = *unaff_RDI + uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

