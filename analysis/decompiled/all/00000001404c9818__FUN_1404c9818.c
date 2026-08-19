// Function: FUN_1404c9818
// Addr: 1404c9818
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c9852) */
/* WARNING: Removing unreachable block (ram,0x0001404c985f) */
/* WARNING: Removing unreachable block (ram,0x0001404c9865) */

void FUN_1404c9818(char param_1,int param_2)

{
  uint uVar1;
  uint in_EAX;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  byte in_CF;
  
  uVar1 = (uint)&stack0x00000000 + in_EAX;
  cRam000000014baca493 = cRam000000014baca493 + param_1;
  *(ulonglong *)((ulonglong)(uVar1 + in_CF) - 8) =
       (ulonglong)
       (in_EAX + param_2 +
       (uint)(CARRY4((uint)&stack0x00000000,in_EAX) || CARRY4(uVar1,(uint)in_CF)));
  *(int *)CONCAT44(unaff_0000001c,unaff_EBX) = *(int *)CONCAT44(unaff_0000001c,unaff_EBX) + param_2;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

