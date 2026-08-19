// Function: FUN_1404beaac
// Addr: 1404beaac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined7 uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)((ulonglong)param_1 >> 8);
  bVar2 = (byte)param_1;
  *(uint *)(unaff_RBP + 0x10) = *(uint *)(unaff_RBP + 0x10) & (uint)param_1;
  *(char *)(unaff_RBP + -8) = *(char *)(unaff_RBP + -8) + bVar2;
  func_0x00011886eaf6();
  *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,bVar2))) =
       *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,bVar2))) + cVar3;
  *unaff_RDI = *unaff_RDI + cVar6;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar2;
  *(undefined1 *)CONCAT71(uVar7,cVar6) = 0x3f;
  cRam000000000000003f = (cRam000000000000003f + -0x26) - CARRY1(bVar1,bVar2);
  *(char *)(unaff_RBX + -0x47ffd9dd) = *(char *)(unaff_RBX + -0x47ffd9dd) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

