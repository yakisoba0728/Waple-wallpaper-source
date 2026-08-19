// Function: FUN_1404d350c
// Addr: 1404d350c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d350c(byte *param_1,char param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong in_RAX;
  uint *puVar7;
  char unaff_R12B;
  byte unaff_retaddr;
  uint uVar2;
  
  uVar3 = *(undefined4 *)(in_RAX + 2);
  *param_1 = *param_1 ^ (byte)(in_RAX >> 8);
  puVar7 = (uint *)(in_RAX & 0xffffffffffffff08);
  uVar4 = (uint)CARRY1(unaff_retaddr,(byte)((ulonglong)puVar7 >> 8));
  uVar1 = *puVar7;
  uVar5 = (uint)puVar7;
  uVar2 = *puVar7;
  *puVar7 = uVar2 + uVar5 + uVar4;
  iVar6 = uVar5 + 0xd0010c4 + (uint)(CARRY4(uVar1,uVar5) || CARRY4(uVar2 + uVar5,uVar4));
  if (iVar6 != 0) {
    cRam00000000d04d4389 = cRam00000000d04d4389 + (char)iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_R12B;
  cRamfffffffff2003ec7 = cRamfffffffff2003ec7 + param_2 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

