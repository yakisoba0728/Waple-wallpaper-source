// Function: FUN_1404c83b8
// Addr: 1404c83b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c83b8(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  char *in_RAX;
  byte bVar3;
  undefined4 uVar5;
  char cVar6;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_ESI;
  undefined4 unaff_00000034;
  uint uVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  *param_2 = *param_2 >> 0x11;
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  bVar3 = (char)param_1 + cVar6 + *param_2;
  uVar4 = CONCAT31((int3)((ulonglong)param_1 >> 8),bVar3);
  uRam00000001045983ce = uRam00000001045983ce & uVar4;
  uRam00000001104c9205 = LocalDescriptorTableRegister();
  *(char *)CONCAT44(uVar5,uVar4) = *(char *)CONCAT44(uVar5,uVar4) + cVar6;
  bVar2 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar3;
  *(uint *)CONCAT44(uVar5,uVar4) =
       *(int *)CONCAT44(uVar5,uVar4) + unaff_ESI + (uint)CARRY1(bVar2,bVar3);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)param_2 * 8);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  *(char *)CONCAT44(uVar5,uVar4) = *(char *)CONCAT44(uVar5,uVar4) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

