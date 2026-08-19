// Function: FUN_1404b1484
// Addr: 1404b1484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b149e) */

void FUN_1404b1484(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  byte in_CF;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)((ulonglong)param_2 >> 8);
  bVar1 = (byte)param_2 + *(byte *)(unaff_RBX + param_1);
  cVar2 = bVar1 + in_CF;
  cVar3 = cVar3 + *(char *)(CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + param_1) +
          (CARRY1((byte)param_2,*(byte *)(unaff_RBX + param_1)) || CARRY1(bVar1,in_CF));
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + cVar2;
  bVar1 = (byte)param_1 ^ *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
  if (CONCAT71((int7)((ulonglong)param_1 >> 8),bVar1) == 1 || bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

