// Function: FUN_1404c147c
// Addr: 1404c147c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c14d5) */

void FUN_1404c147c(char param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 in_register_00000004;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)param_2;
  bVar4 = (byte)((ulonglong)param_2 >> 8) |
          *(byte *)(unaff_RDI + CONCAT44(in_register_00000004,in_EAX));
  *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) + param_1;
  iVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX ^ *unaff_RSI);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x3ad7ffb4 +
                   CONCAT62(uVar5,CONCAT11(0x2b,uVar3)));
  *pcVar1 = *pcVar1 + unaff_BH;
  *(int *)CONCAT44(in_register_00000004,iVar2) =
       *(int *)CONCAT44(in_register_00000004,iVar2) - iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

