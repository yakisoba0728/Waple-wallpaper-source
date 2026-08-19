// Function: FUN_1402d0c68
// Addr: 1402d0c68
// Size: 178 bytes


undefined4 FUN_1402d0c68(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  puVar5 = (undefined8 *)func_0x0001402d99c4();
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        lVar3 = *(longlong *)(piVar6 + 2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == 5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (lVar3 != 1) {
          uVar4 = puVar5[1];
          puVar5[1] = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(puVar5 + 2);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
code_r0x0001402d0da6:
              *(undefined4 *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto code_r0x0001402d0da6;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto code_r0x0001402d0da6;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto code_r0x0001402d0da6;
              }
            }
            thunk_FUN_140420d40(8,uVar8);
            *(undefined4 *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            thunk_FUN_140420d40(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

