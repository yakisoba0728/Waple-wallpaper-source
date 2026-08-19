// Function: FUN_1404d0480
// Addr: 1404d0480
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0480(char *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  int *in_RAX;
  char cVar3;
  undefined6 uVar4;
  byte *unaff_RSI;
  longlong unaff_R14;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar2 = (int)in_RAX - *in_RAX;
  *(char *)((ulonglong)uVar2 + 0x8f8002b) = *(char *)((ulonglong)uVar2 + 0x8f8002b) + -0x14;
  bVar1 = (char)uVar2 + unaff_RSI[unaff_R14];
  cVar3 = (char)((ulonglong)param_2 >> 8) + *param_1;
  *(uint *)CONCAT62(uVar4,CONCAT11(cVar3,(char)param_2)) =
       *(int *)CONCAT62(uVar4,CONCAT11(cVar3,(char)param_2)) +
       CONCAT31((int3)(uVar2 >> 8),bVar1 + *unaff_RSI) + (uint)CARRY1(bVar1,*unaff_RSI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

