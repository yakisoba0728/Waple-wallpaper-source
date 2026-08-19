// Function: FUN_1404bcb28
// Addr: 1404bcb28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcb28(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int *in_RAX;
  byte unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  bool in_PF;
  
  if (!in_PF) {
    iVar7 = ((int)in_RAX - *in_RAX) - (uint)in_CF;
    uVar6 = in(0x13);
    uVar5 = CONCAT31((int3)((uint)iVar7 >> 8),uVar6);
    *unaff_RDI = *unaff_RDI + (char)((uint)iVar7 >> 8);
    *unaff_RSI = uVar6;
    bVar2 = *(byte *)CONCAT71(unaff_00000019,unaff_BL);
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
    uVar3 = (uint)CARRY1(bVar2,unaff_BL);
    uVar4 = uVar5 + 0xad00c00;
    if (SCARRY4(uVar5,0xad00c00) == SCARRY4(uVar4,uVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1;
    pcVar1 = (char *)((ulonglong)
                      CONCAT31((int3)(uVar4 + uVar3 >> 8),
                               (char)(uVar4 + uVar3) + (0xf52ff3ff < uVar5 || CARRY4(uVar4,uVar3)))
                     - 0x36);
    *pcVar1 = *pcVar1 + param_2;
    *param_4 = *param_4 + -0x10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

