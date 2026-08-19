// Function: FUN_1404a9c98
// Addr: 1404a9c98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9c98(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar5 = in_EAX | 0x49efa800;
  bVar2 = *param_1;
  bVar4 = (byte)in_EAX;
  *param_1 = *param_1 + bVar4;
  iRam00000001524bada7 = iRam00000001524bada7 + uVar5 + (uint)CARRY1(bVar2,bVar4);
  cVar3 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar4;
  if (!SCARRY1(cVar3,bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x348e000a);
  *puVar1 = *puVar1 & (uint)param_1;
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 - uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

