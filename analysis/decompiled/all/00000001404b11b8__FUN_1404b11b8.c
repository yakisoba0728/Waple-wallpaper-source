// Function: FUN_1404b11b8
// Addr: 1404b11b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b11b8(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong in_RAX;
  char cVar5;
  undefined6 uVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar5 = (char)((ulonglong)param_1 >> 8);
  *(char *)(in_RAX + 2) = *(char *)(in_RAX + 2) + cVar5;
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,0x15)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,0x15)) + unaff_SPL;
  uVar2 = (int)in_RAX + 0xc4050002;
  uVar3 = uVar2 | 0x15b1eb00;
  bVar1 = (byte)uVar2;
  bVar4 = (byte)(uVar3 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL + cVar5) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL + cVar5) + '\x15' + CARRY1(bVar1,bVar4);
  uRam00000001145011e0 = uRam00000001145011e0 & CONCAT31((int3)(uVar3 >> 8),bVar1 + bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

