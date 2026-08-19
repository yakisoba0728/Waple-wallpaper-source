// Function: FUN_1404c97f4
// Addr: 1404c97f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9852) */
/* WARNING: Removing unreachable block (ram,0x0001404c985f) */
/* WARNING: Removing unreachable block (ram,0x0001404c9865) */

void FUN_1404c97f4(char param_1,int param_2)

{
  byte bVar1;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *in_RAX;
  char cVar7;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  byte bVar2;
  byte *pbVar6;
  
  bVar4 = (byte)in_RAX ^ *in_RAX;
  pbVar6 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  cVar7 = (char)param_2;
  *(char *)(unaff_RDI + 0x21004c) = *(char *)(unaff_RDI + 0x21004c) + cVar7;
  bVar1 = *pbVar6;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  if (SCARRY1(bVar2,bVar4)) {
    uVar5 = (uint)pbVar6;
    uVar3 = (uint)&stack0x00000000 + uVar5;
    cRam000000014baca493 = cRam000000014baca493 + param_1;
    *(ulonglong *)((ulonglong)(uVar3 + CARRY1(bVar1,bVar4)) - 8) =
         (ulonglong)
         (uVar5 + param_2 +
         (uint)(CARRY4((uint)&stack0x00000000,uVar5) || CARRY4(uVar3,(uint)CARRY1(bVar1,bVar4))));
    *(int *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + param_2;
    *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x1f01004c) = *(char *)(unaff_RDI + 0x1f01004c) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

