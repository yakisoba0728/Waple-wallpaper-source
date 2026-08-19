// Function: FUN_1404ab380
// Addr: 1404ab380
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab38d) overlaps instruction at (ram,0x0001404ab388)
    */

void FUN_1404ab380(undefined1 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  char *in_RAX;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  bVar4 = (byte)((ulonglong)param_2 >> 8) | (&stack0x00000000)[(longlong)param_1];
  bVar1 = *(byte *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3));
  *(byte *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) + (byte)param_1;
  if (CARRY1(bVar1,(byte)param_1)) {
    if (*(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) == '\0') {
      *param_1 = *param_1;
      in(CONCAT11(bVar4,uVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *in_RAX = *in_RAX + bVar4;
    uVar2 = in(CONCAT11(bVar4,uVar3));
    in_RAX = (char *)(ulonglong)uVar2;
  }
  uRam00000001b44fb390 = uRam00000001b44fb390 & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

