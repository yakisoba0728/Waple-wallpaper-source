// Function: FUN_1404d4c18
// Addr: 1404d4c18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4c18(char param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  byte *in_RAX;
  char unaff_BL;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_R12B;
  uint *puVar4;
  
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) & unaff_ESI;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar1 = in(0xd);
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BL;
  if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0') {
    *param_2 = *param_2 + param_1;
    uVar2 = (uint)puVar4 | *puVar4;
    uVar3 = uVar2 + 0x10000a34;
    puVar4 = (uint *)(ulonglong)uVar3;
    if (uVar2 < 0xeffff5cc && uVar3 != 0) {
      uRam0000000124524c74 = uRam0000000124524c74 & uVar3;
      *puVar4 = *puVar4 | uVar3;
      *(char *)((longlong)puVar4 + 0x4b) = *(char *)((longlong)puVar4 + 0x4b) + cRam000000017dda137b
      ;
      *param_4 = *param_4 + unaff_R12B;
      *param_2 = *param_2 + (char)uVar3;
      *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  cRam00000001804d89ac = cRam00000001804d89ac + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

