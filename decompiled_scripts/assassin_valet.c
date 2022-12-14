#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	struct<39> Local_57 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 16;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 21;
	var uLocal_282 = 6;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1132396544;
	var uLocal_289 = 1132396544;
	var uLocal_290 = 1132396544;
	var uLocal_291 = 0;
	var uLocal_292 = -1082130432;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 8;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = -1;
	var uLocal_353 = 1092616192;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	struct<7> Local_360 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	int iLocal_371 = 0;
	float fLocal_372 = 0f;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	bool bLocal_375 = 0;
	bool bLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 3;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 1;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 2;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 13;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 13;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 13;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 13;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 13;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 13;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 13;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	struct<55> Local_969 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037[3] = { 0, 0, 0 };
	int iLocal_1041[2] = { 0, 0 };
	int iLocal_1044 = 0;
	int iLocal_1045[2] = { 0, 0 };
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
	int iLocal_1050 = 0;
	int iLocal_1051[2] = { 0, 0 };
	var uLocal_1054[3] = { 0, 0, 0 };
	var uLocal_1058[2] = { 0, 0 };
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063 = 0;
	struct<8> Local_1064[3];
	struct<8> Local_1089[2];
	struct<8> Local_1106[2];
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125[3] = { 0, 0, 0 };
	var uLocal_1129[2] = { 0, 0 };
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	int iLocal_1135 = 0;
	int iLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	bool bLocal_1139 = 0;
	int iLocal_1140 = 0;
	bool bLocal_1141 = 0;
	int iLocal_1142 = 0;
	bool bLocal_1143 = 0;
	bool bLocal_1144 = 0;
	bool bLocal_1145 = 0;
	bool bLocal_1146 = 0;
	int iLocal_1147 = 0;
	bool bLocal_1148 = 0;
	bool bLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	bool bLocal_1153 = 0;
	bool bLocal_1154 = 0;
	bool bLocal_1155 = 0;
	bool bLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	bool bLocal_1159 = 0;
	int iLocal_1160 = 0;
	bool bLocal_1161 = 0;
	int iLocal_1162 = 0;
	bool bLocal_1163 = 0;
	int iLocal_1164 = 0;
	bool bLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	bool bLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	bool bLocal_1171 = 0;
	int iLocal_1172 = 0;
	bool bLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	bool bLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	bool bLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	bool bLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	bool bLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	int iLocal_1198 = 0;
	int iLocal_1199 = 0;
	var uLocal_1200[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1206 = 0;
	var uLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	int iLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	var uLocal_1216 = 0;
	int iLocal_1217 = 0;
	int iLocal_1218 = 0;
	int iLocal_1219 = 0;
	int iLocal_1220 = 0;
	int iLocal_1221 = 0;
	float fLocal_1222 = 0f;
	float fLocal_1223 = 0f;
	float fLocal_1224 = 0f;
	float fLocal_1225[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1231[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1237 = 0f;
	float fLocal_1238 = 0f;
	float fLocal_1239[3] = { 0f, 0f, 0f };
	var uLocal_1243[3] = { 0, 0, 0 };
	float fLocal_1247 = 0f;
	float fLocal_1248 = 0f;
	float fLocal_1249 = 0f;
	int iLocal_1250 = 0;
	float fLocal_1251 = 0f;
	struct<3> Local_1252[3];
	struct<3> Local_1262[3];
	struct<3> Local_1272[5];
	struct<3> Local_1288 = { 0, 0, 0 } ;
	struct<3> Local_1291 = { 0, 0, 0 } ;
	struct<3> Local_1294 = { 0, 0, 0 } ;
	struct<3> Local_1297 = { 0, 0, 0 } ;
	struct<3> Local_1300 = { 0, 0, 0 } ;
	struct<3> Local_1303 = { 0, 0, 0 } ;
	struct<3> Local_1306 = { 0, 0, 0 } ;
	struct<3> Local_1309 = { 0, 0, 0 } ;
	struct<3> Local_1312 = { 0, 0, 0 } ;
	float fLocal_1315 = 0f;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	var uLocal_1320[2] = { 0, 0 };
	int iLocal_1323 = 0;
	int iLocal_1324[3] = { 0, 0, 0 };
	var uLocal_1328 = 0;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	int iLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	bool bLocal_1367 = 0;
	var uLocal_1368 = 16;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = -1;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 1000;
	var uLocal_1543 = 1000;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 8;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 4;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 4;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 4;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 4;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 4;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 4;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 4;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 4;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	struct<3> Local_1669 = { 0, 0, 0 } ;
	float fLocal_1672 = 0f;
	struct<3> Local_1673 = { 0, 0, 0 } ;
	float fLocal_1676 = 0f;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	struct<3> Local_1679 = { 0, 0, 0 } ;
	struct<3> Local_1682 = { 0, 0, 0 } ;
	struct<3> Local_1685 = { 0, 0, 0 } ;
	struct<3> Local_1688 = { 0, 0, 0 } ;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	int iLocal_1694 = 0;
	struct<12> Local_1695 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 500f, 500f, 500f };
	uLocal_54 = unk_0x7B826893B2E27385();
	uLocal_55 = unk_0x19F6152D9806BBF8();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1035 = 3;
	iLocal_1214 = 37000;
	iLocal_1220 = -1;
	fLocal_1222 = 90000f;
	fLocal_1247 = 135f;
	fLocal_1249 = 0f;
	fLocal_1251 = 0f;
	Local_1297 = { -1162.985f, -161.715f, -38.221f };
	Local_1300 = { -1327.63f, -266.202f, 38.221f };
	Local_1303 = { -1236.661f, -197.316f, 39.6313f };
	Local_1306 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1312 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1315 = 40f;
	iLocal_1329 = joaat("a_m_y_beachvesp_02");
	iLocal_1330 = joaat("fbi2");
	iLocal_1331 = joaat("s_m_m_highsec_01");
	iLocal_1332 = joaat("s_m_m_highsec_02");
	iLocal_1333 = joaat("washington");
	Local_1669 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1672 = 304.201f;
	Local_1673 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1676 = 137.9228f;
	Local_1679 = { -1510.733f, -935.96f, 10.90214f };
	Local_1682 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1685 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1688 = { 4.686822f, -0.024198f, -72.45972f };
	if (unk_0x4B34601C5C56F3EE(3))
	{
		unk_0x1CF3F44FC2EB9F99("ASS1_FAIL");
		func_545(&(Global_113386.f_19963.f_1), 1024);
		func_543();
		func_538();
	}
	unk_0xBD1F51FB3FA2C6E4(1);
	iLocal_1049 = unk_0xE2D3D51028F0428A();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
	}
	if (func_537())
	{
		if (func_536())
		{
			iLocal_1157 = 1;
		}
		bLocal_1146 = true;
	}
	else
	{
		bLocal_1146 = false;
	}
	func_535();
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 32, 0);
	}
	func_534();
	iLocal_269 = 0;
	Local_57 = { func_532(iLocal_269) };
	unk_0x269268AD5D4CA266(iLocal_1331, 1);
	unk_0x269268AD5D4CA266(iLocal_1332, 1);
	unk_0x62EA3913642EDF8E();
	if (func_537())
	{
		bLocal_376 = true;
		iLocal_1213 = func_531();
		if (Global_94618)
		{
			if (iLocal_1213 <= 1)
			{
				iLocal_1213++;
			}
		}
		func_530();
		if (iLocal_1213 == 0)
		{
			if (iLocal_1157)
			{
				func_528();
				while (!func_527())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar0 = func_465(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iVar0)) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(iVar0))) && !unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iVar0))) && !unk_0xA94E098B1788A730(iVar0))
				{
					unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
				}
				else
				{
					unk_0xD59CC8123FD1A789(&iVar0);
				}
			}
			func_464(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1213 == 1)
		{
			if (iLocal_1157)
			{
				func_528();
				while (!func_527())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar1 = func_465(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iVar1)) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(iVar1))) && !unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iVar1))) && !unk_0xA94E098B1788A730(iVar1))
				{
					unk_0x9F65B3BAFA302A65(iVar1, 1084227584);
				}
				else
				{
					unk_0xD59CC8123FD1A789(&iVar1);
				}
			}
			func_464(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1213 == 2)
		{
			if (iLocal_1157)
			{
				func_528();
				while (!func_527())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iVar2 = func_465(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0xD2B5B1C8FC84FE0F(unk_0x15CAA6D7B11F1A7C(iVar2)) && !unk_0xD6F7D32A98E07F93(unk_0x15CAA6D7B11F1A7C(iVar2))) && !unk_0x4262B4DCEADC2695(unk_0x15CAA6D7B11F1A7C(iVar2))) && !unk_0xA94E098B1788A730(iVar2))
				{
					unk_0x9F65B3BAFA302A65(iVar2, 1084227584);
				}
				else
				{
					unk_0xD59CC8123FD1A789(&iVar2);
				}
			}
			func_464(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		unk_0x6D3F703013ED87D3("M_ASS1", 0);
		if (iLocal_1147)
		{
			if (func_463())
			{
				func_462();
			}
		}
		else if (!unk_0xF68107C40359970C(iLocal_1049))
		{
			func_455();
			if (iLocal_1035 < 10)
			{
				Local_360.f_6 = 1;
			}
			else
			{
				Local_360.f_6 = 5;
			}
			func_154();
			func_102();
			if (iLocal_1162)
			{
				func_97();
			}
			if (!bLocal_1145)
			{
				if (iLocal_1035 >= 9 && iLocal_1035 < 11)
				{
					func_93(&uLocal_1207, &fLocal_1222, &bLocal_1144, &bLocal_1145);
				}
			}
			func_61();
			func_59();
			if (((iLocal_1138 || bLocal_1143) && iLocal_1035 < 11) || (bLocal_1173 && iLocal_1035 < 11))
			{
				if (!func_58(&uLocal_1358) && iLocal_1035 > 8)
				{
					func_55(&uLocal_1358);
				}
				else if (iLocal_1035 < 8 || func_52(&uLocal_1358) > 5f)
				{
					if (iLocal_1048 == 1)
					{
						func_37(1);
					}
					else if (iLocal_1048 == 5)
					{
						func_37(5);
					}
					else
					{
						func_37(2);
					}
				}
				else if (func_52(&uLocal_1358) > 2.5f)
				{
					if (!iLocal_1174)
					{
						if (!bLocal_1193)
						{
							iLocal_1061 = func_36(70f, 0);
						}
						else
						{
							iLocal_1061 = func_36(70f, 1);
						}
						if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
						{
							if (!unk_0xF68107C40359970C(iLocal_1061))
							{
								unk_0x03A927199A2DFE46(iLocal_1061);
								if (iLocal_1048 == 1)
								{
									if (unk_0xE5965CDF24F93A9F(iLocal_1318))
									{
										if (!unk_0xD5C6B5E3B93A5EDC(iLocal_1061, 0))
										{
											unk_0x0B47872E9D74882C(iLocal_1061, iLocal_1318, iLocal_1318, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
										}
									}
									if (unk_0xE5965CDF24F93A9F(iLocal_1061) && !unk_0xF68107C40359970C(iLocal_1061))
									{
										func_34(iLocal_1061, 6, "OJAvaGUARD2");
										func_33(&uLocal_1368, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1048 == 8)
								{
									if (unk_0xE5965CDF24F93A9F(iLocal_1316) && unk_0x55A0C756C4A8220C(iLocal_1316, 0))
									{
										unk_0x0B47872E9D74882C(iLocal_1061, iLocal_1316, iLocal_1316, 2f, 0, 0.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									}
									func_34(func_31(25f), 6, "OJAvaGUARD2");
									func_33(&uLocal_1368, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									unk_0x636B3584208A6D73(iLocal_1061, unk_0xE2D3D51028F0428A(), -1, 0);
									func_2(iLocal_1061);
								}
							}
						}
						iLocal_1174 = 1;
					}
				}
			}
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(iLocal_1049, 0))
	{
		iVar0 = unk_0xB3FF0049C1FD38EC(iLocal_1049, 0);
		if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("towtruck") || unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("towtruck2"))
		{
			bLocal_1148 = true;
		}
	}
	else
	{
		bLocal_1148 = false;
	}
	if (bLocal_1148)
	{
		if (unk_0x671CB92F637FDB33(iVar0, iLocal_1316))
		{
			unk_0x25780288AB87BA6F(iVar0, iLocal_1316);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1184)
	{
		if ((unk_0xE5965CDF24F93A9F(iParam0) && !unk_0xF68107C40359970C(iParam0)) && func_29(iParam0, 1) < 50f)
		{
			if (!func_28())
			{
				if (iLocal_1048 == 4)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1368, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1048 == 8)
				{
					func_34(func_31(25f), 6, "OJAvaGUARD2");
					func_33(&uLocal_1368, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1368, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1184 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0x3C57C2F07FEE34D2(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_20471 = 0;
	func_4();
}

void func_4()
{
	unk_0x82B0661A78CC39CF();
	Global_22616 = 0;
	if ((unk_0xA3329B7A7520670E() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		unk_0xD681CC2BC1084DB6(0);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (unk_0x2E5F8A288A954523())
	{
		unk_0xD681CC2BC1084DB6(1);
		Global_21605 = 6;
		return;
	}
}

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		return Global_21224;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					unk_0xD681CC2BC1084DB6(0);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_4();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2E5F8A288A954523())
		{
			return 0;
		}
		if (func_26(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_25();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			unk_0xB0550BC91B0159D6(&Global_8136, 20);
			unk_0xB0550BC91B0159D6(&Global_8137, 17);
			unk_0xB0550BC91B0159D6(&Global_8138, false);
			if (bParam2)
			{
				func_17();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (func_16())
				{
					return 0;
				}
				if (unk_0xE02D8BDF4B18D48D(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x90DCD1F6C0982DC1(unk_0xE2D3D51028F0428A()))
				{
					return 0;
				}
				if (unk_0x8DE48073046D4CF0(unk_0xE2D3D51028F0428A(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9()))
					{
						return 0;
					}
					if (unk_0x3DA4842FA4407BE2(unk_0xE2D3D51028F0428A()))
					{
						return 0;
					}
					if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
					{
						return 0;
					}
				}
			}
			if (func_15())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_14();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_13();
		func_8();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_4();
	}
	return 0;
}

void func_8()
{
	if (!func_9())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_9()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (unk_0x9E2D6C50374FCFA9() == func_12())
	{
		return 0;
	}
	if (func_10(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[unk_0x9E2D6C50374FCFA9() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	return 1;
}

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

var func_11(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_12()
{
	return -1;
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD681CC2BC1084DB6(0);
	Global_21605 = 1;
}

void func_14()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	unk_0xB0550BC91B0159D6(&Global_8137, 16);
}

int func_15()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar1, 1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x2358AE4C940CF1DF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x98C2AE9A4C384CBF(unk_0xE2D3D51028F0428A(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_17()
{
	if (func_24(14))
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_18();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

int func_18()
{
	func_19();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_22(Global_113386.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_21(unk_0xE2D3D51028F0428A());
			if (func_20(iVar0) && (!func_24(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_20(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_20(int iParam0)
{
	return iParam0 < 3;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return func_23(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_23(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

bool func_24(int iParam0)
{
	return Global_43052 == iParam0;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_28()
{
	if (Global_21605 != 0 || unk_0x2E5F8A288A954523())
	{
		return 1;
	}
	return 0;
}

float func_29(int iParam0, int iParam1)
{
	return func_30(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), iParam0, iParam1);
}

float func_30(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var3, iParam2);
}

int func_31(float fParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0xF68107C40359970C(uLocal_1054[iVar0]))
		{
			if (func_32(uLocal_1054[iVar0], Local_1294, 1) < fParam0)
			{
				return uLocal_1054[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xF68107C40359970C(uLocal_1058[iVar0]))
		{
			if (func_32(uLocal_1058[iVar0], Local_1294, 1) < fParam0)
			{
				return uLocal_1058[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_32(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), Param1, iParam4);
}

int func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_34(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		func_35(&uLocal_1368, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x2378080C93821600(iParam2, 0);
			}
			else
			{
				unk_0x2378080C93821600(iParam2, 1);
			}
		}
		if (!unk_0xF68107C40359970C(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x102D1A546FDB4B6D(iParam2, 0);
			}
			else
			{
				unk_0x102D1A546FDB4B6D(iParam2, 1);
			}
		}
	}
}

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!unk_0xF68107C40359970C(uLocal_1054[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xD5C6B5E3B93A5EDC(uLocal_1054[iVar0], 0)))
			{
				fVar1 = func_29(uLocal_1054[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1054[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xF68107C40359970C(uLocal_1058[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xD5C6B5E3B93A5EDC(uLocal_1058[iVar0], 0)))
			{
				fVar1 = func_29(uLocal_1058[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_1058[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xF68107C40359970C(iLocal_1051[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0xD5C6B5E3B93A5EDC(uLocal_1058[iVar0], 0)))
			{
				fVar1 = func_29(iLocal_1051[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_1051[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_37(int iParam0)
{
	char* sVar0;
	
	if (iLocal_1147 == 0)
	{
		iLocal_1048 = iParam0;
		func_3();
		unk_0xBA6C3C5E9E5A9442();
		unk_0x1CF3F44FC2EB9F99("ASS1_FAIL");
		if (func_51())
		{
			func_49(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			Global_100441.f_12[0] = 1;
		}
		else
		{
			Global_100441.f_12[0] = 0;
		}
		switch (iLocal_1048)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_1147 = 1;
		func_47(sVar0);
		func_38(0);
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	if (Global_113386.f_9085 || func_46(0))
	{
		iVar0 = func_45();
		if (!func_39(iVar0))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_44();
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		unk_0x3B97C4414E778C45(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	func_43(iVar1, 1);
	unk_0xA131CC850DA50CF0(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
	func_40(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x3E49EF84C421E367(0);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_42(Global_113386.f_18533[iVar0], &Var2, &fVar5))
			{
				Global_113386.f_18533[iVar0] = 318;
				func_41(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_41(var uParam0)
{
	*uParam0 = -15;
}

int func_42(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_42(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_42(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94426[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94426[iParam0 /*2*/] = 0;
	}
}

void func_44()
{
	Global_100476 = 1;
	if (unk_0x99C20D75AF0FB22E(unk_0x9E2D6C50374FCFA9(), 1))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_18())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
	}
	else if (!unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(&Global_78551))
		{
			switch (func_18())
			{
				case 0:
					StringCopy(&Global_78551, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_78551, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_78551, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_78555, "", 16);
		}
		Global_100476 = 0;
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 25);
	}
}

int func_45()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_46(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_47(char* sParam0)
{
	func_545(&(Global_113386.f_19963.f_1), 1024);
	if (!unk_0xE8F6C1F695B25B91(sParam0))
	{
		func_48(sParam0);
	}
}

void func_48(char* sParam0)
{
	if (!unk_0xACC32B78196FBC2A(sParam0))
	{
		if (unk_0xEE91150B7F06C500(sParam0) <= 16)
		{
			StringCopy(&Global_78551, sParam0, 16);
			StringCopy(&Global_78555, "", 16);
			if (unk_0x6C85295E4E1FB8B3())
			{
				unk_0x0FCCD6087693AA00();
			}
		}
	}
}

void func_49(struct<3> Param0, float fParam3)
{
	if (func_50(Global_78559, 0f, 0f, 0f, 0))
	{
		Global_78559 = { Param0 };
		Global_78562 = fParam3;
	}
}

bool func_50(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_51()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()) || unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
		{
			return 1;
		}
	}
	return 0;
}

float func_52(var uParam0)
{
	if (func_58(uParam0))
	{
		if (func_54(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_53(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_53(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_54(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_55(var uParam0)
{
	if (!func_58(uParam0))
	{
		func_56(uParam0);
	}
}

void func_56(var uParam0)
{
	func_57(uParam0, 0f);
}

void func_57(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_53(BitTest(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, true);
	unk_0xB0550BC91B0159D6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_58(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_59()
{
	if (func_60(&iLocal_1048))
	{
		func_37(6);
	}
}

int func_60(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_1035 > 11)
	{
		if (!unk_0xF68107C40359970C(iLocal_1050))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_1050, iLocal_1316, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_1168)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_1050))
		{
			if (!unk_0xF68107C40359970C(iLocal_1050))
			{
				if (func_30(iLocal_1049, iLocal_1050, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
						{
							if (unk_0x4D21C9FB671ED18F(iLocal_1316) || !unk_0xBC7D3EDF3455BC35(iLocal_1316))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (unk_0x4D21C9FB671ED18F(iLocal_1050))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uLocal_1124))
				{
					if (func_30(iLocal_1049, iLocal_1050, 1) >= (fVar0 * 0.5f))
					{
						if (!unk_0x7962B3383C030376(uLocal_1124))
						{
							unk_0x9705014C37E60003(uLocal_1124, 1);
						}
					}
					else if (unk_0x7962B3383C030376(uLocal_1124))
					{
						unk_0x9705014C37E60003(uLocal_1124, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_61()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		if (!unk_0xF68107C40359970C(iLocal_1050))
		{
			func_62(&uLocal_1533, iLocal_1050, 0, 0, 1, 1, 1);
		}
	}
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_63(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_63(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_64(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_64(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
	{
		func_92(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_65(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_65(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x4131052989DE1278())
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xE8F6C1F695B25B91(iVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_91(iVar0))
	{
		func_90();
	}
	if (func_89(iParam1) && unk_0x2B5F4FBAF644BEC8(iParam1))
	{
		iVar1 = 0;
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			unk_0xAD3E09D1957BB0DE(unk_0x28AA31872A651BC7(iParam1));
			unk_0x757E8ACDD0FCB0CA(unk_0x28AA31872A651BC7(iParam1), 1);
			if (unk_0x2CF76E57D8E46C1F(unk_0x28AA31872A651BC7(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x04D9F44466CBF3CA(iParam1))
		{
			unk_0xE0A93E5ADBED87DE(unk_0x31EB55FAEEE9C0F5(iParam1));
			if (unk_0xE390839FC176621D(unk_0x31EB55FAEEE9C0F5(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam1))
		{
			unk_0x6E740265DB1F6EA1(unk_0x1AA24836EA881D77(iParam1));
			if (unk_0x3E04DE565F9095B8(unk_0x1AA24836EA881D77(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4131052989DE1278())
		{
			if (func_84(uParam0, bParam7, bParam9, 0))
			{
				func_81(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_70(iVar0))
				{
					if ((unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0)) && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((iVar1 && !unk_0xF847447D4467709D()) && uParam8)
						{
							if (!func_91(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
								{
									func_68(1);
								}
							}
						}
					}
				}
			}
			else if (func_70(iVar0))
			{
				if (unk_0xE8F6C1F695B25B91(uParam0->f_3) && !unk_0xE8F6C1F695B25B91(iVar0))
				{
					if (((unk_0xBC7D3EDF3455BC35(iParam1) && iVar1) && !unk_0xF847447D4467709D()) && uParam8)
					{
						if (!func_91(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3C57C2F07FEE34D2("CMN_HINT", iVar0))
							{
								func_68(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xE8F6C1F695B25B91(sParam5))
			{
				if (func_91(sParam5))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
			{
				if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
				{
					if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
				{
					func_92(uParam0, iVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_67(uParam0))
				{
					func_66(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, iVar0, 0);
	}
}

void func_66(var uParam0)
{
	if (func_89(unk_0xE2D3D51028F0428A()))
	{
		unk_0xC89EA639A6F338A6(unk_0xE2D3D51028F0428A());
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xE4FA4FBF0BAFD2A8(1);
		unk_0xBD1E8007D7DFA747(0);
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		unk_0x06A78BA0B756C754("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_67(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x320D1840B6DAA1CC()
		{
			return 1;
		}
	}
	return 0;
}

int func_68(bool bParam0)
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_70(char* sParam0)
{
	if (!func_71(1, 1, 0))
	{
		if ((!unk_0xACC32B78196FBC2A(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x3410421C60BF7143(1);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_68(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_68(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_71(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x04458B4E5D9E466A())
	{
		return 0;
	}
	if (func_80(0))
	{
		return 0;
	}
	if (func_79())
	{
		return 0;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (unk_0xB4C854DD86E40FDA(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
		{
			if (unk_0xEC6430115D7DD916(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(3) == 3 || unk_0x4DE6A646AFB7CF5C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(6) == 3 || unk_0x4DE6A646AFB7CF5C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(4) == 3 || unk_0x4DE6A646AFB7CF5C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAFF5FD1A82555477(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(5) == 3 || unk_0x4DE6A646AFB7CF5C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x45052A4871A67255(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4DE6A646AFB7CF5C(2) == 3 || unk_0x4DE6A646AFB7CF5C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5E29B0CF10CECB34() == 3 || unk_0x5E29B0CF10CECB34() == 4)
			{
				return 0;
			}
			if (unk_0x594CC97203485127())
			{
				return 0;
			}
		}
	}
	if ((func_78() || func_77(Global_4718592.f_168757)) || func_76())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			iVar1 = func_75(unk_0xE2D3D51028F0428A(), 0);
			if (((unk_0x38B74904557F43CC(iVar0, iVar1) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("riot2") && iVar1 == 0) && func_74(iVar0, 10)) && unk_0x0DD0BC46C4CFD6AD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_72(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	return 1;
}

int func_72(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_73(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_73(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (unk_0x03AC3319D1B50189(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x6B83F5AE0478286F(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_76()
{
	return Global_2714762.f_19;
}

bool func_77(int iParam0)
{
	return iParam0 == 51;
}

var func_78()
{
	return Global_2714762.f_18;
}

bool func_79()
{
	return unk_0x320D1840B6DAA1CC() <= Global_23150.f_6269 + 100;
}

int func_80(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_81(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		func_92(uParam0, 0, 0);
	}
	if (func_50(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x9044EDB8A7BF67B4(iParam1))
		{
			iVar0 = unk_0x28AA31872A651BC7(iParam1);
			if (!unk_0xD5C6B5E3B93A5EDC(iVar0, 0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					if (!func_82())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xECF091D7E67FF7F2(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x56593357686570F4(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xF30F15F203736DE4(unk_0xE2D3D51028F0428A(), iParam1, -1, iVar3, iVar4);
	unk_0x9DCF157443EA30D6("FocusIn", 0, 0);
	unk_0x66B27A59829491D3("HINT_CAM_SCENE");
	unk_0x91DFC8F68F6D9B05(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x320D1840B6DAA1CC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_82()
{
	return func_83(unk_0x9E2D6C50374FCFA9());
}

int func_83(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(unk_0x407E03586628E458(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x320D1840B6DAA1CC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x320D1840B6DAA1CC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_67(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x320D1840B6DAA1CC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x320D1840B6DAA1CC();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x320D1840B6DAA1CC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1))
					{
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 1) || unk_0x7F528E84564C4D10(unk_0xE2D3D51028F0428A(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_67(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_71(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_90();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x51844F589D928A86(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x51844F589D928A86(0, 80))
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!unk_0x20F5A2DB460AB9BB(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x7653D561C9574763(0, 140, 1);
			unk_0x7653D561C9574763(0, 80, 1);
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7653D561C9574763(0, 80, 1);
		if (unk_0xFE62696F731C151B())
		{
			if (unk_0x0DBA73788F6E3C5F(0, 80) && unk_0x320D1840B6DAA1CC() > Global_116)
			{
				unk_0xE4FA4FBF0BAFD2A8(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x04D9F44466CBF3CA(iParam0))
		{
			if (unk_0x55A0C756C4A8220C(unk_0x31EB55FAEEE9C0F5(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			if (!unk_0xF68107C40359970C(unk_0x28AA31872A651BC7(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0086095F1731DE17(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90()
{
	unk_0xCED9E32812D6C7C7(&Global_8137, 4);
}

bool func_91(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_92(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (unk_0x4131052989DE1278())
	{
		unk_0xBD1E8007D7DFA747(iParam2);
		unk_0x06A78BA0B756C754("FocusIn");
		unk_0x0AF8D3A06BB92903("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9DCF157443EA30D6("FocusOut", 0, 0);
			unk_0x91DFC8F68F6D9B05(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE4FA4FBF0BAFD2A8(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE8F6C1F695B25B91(uParam0->f_3))
	{
		if (func_91(uParam0->f_3))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
	if (!unk_0xE8F6C1F695B25B91(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x3410421C60BF7143(1);
		}
	}
}

void func_93(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_58(&uLocal_1355))
		{
			func_55(&uLocal_1355);
		}
		*bParam2 = 1;
	}
	if (func_58(&uLocal_1355))
	{
		fVar0 = func_52(&uLocal_1355);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1217 = unk_0xF2DB717A73826179((*fParam1 - fVar0));
	iLocal_1217 *= 1000;
	if (iLocal_1217 < 63000)
	{
		iLocal_1151 = 1;
	}
	if (iLocal_1217 < 65000)
	{
		iLocal_1158 = 1;
	}
	if (iLocal_1217 < iLocal_1214)
	{
		iLocal_1181 = 1;
	}
	if (!unk_0x70F555A7CCF10659("SCRIPT\ASSASSINATION_MULTI", 0, -1))
	{
		bLocal_1367 = false;
	}
	else
	{
		bLocal_1367 = true;
	}
	if (iLocal_1217 < 30000)
	{
		iLocal_1172 = 1;
		if (bLocal_1367)
		{
			if (func_58(&uLocal_1364))
			{
				if (func_52(&uLocal_1364) > 1f)
				{
					unk_0x91DFC8F68F6D9B05(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_56(&uLocal_1364);
				}
			}
			else
			{
				unk_0x91DFC8F68F6D9B05(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_55(&uLocal_1364);
			}
		}
		func_94(iLocal_1217, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_94(iLocal_1217, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_95(7, bVar0);
		Global_1649593.f_4659[bVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[bVar0] = iParam2;
		Global_1649593.f_4659.f_216[bVar0] = iParam3;
		Global_1649593.f_4659.f_183[bVar0] = iParam4;
		Global_1649593.f_4659.f_194[bVar0] = iParam5;
		Global_1649593.f_4659.f_249[bVar0] = iParam6;
		Global_1649593.f_4659.f_260[bVar0] = iParam7;
		Global_1649593.f_4659.f_205[bVar0] = iParam8;
		Global_1649593.f_4659.f_314[bVar0] = iParam9;
		Global_1649593.f_4659.f_325[bVar0] = iParam10;
		Global_1649593.f_4659.f_357[bVar0] = iParam11;
		Global_1649593.f_4659.f_238[bVar0] = iParam12;
		Global_1649593.f_4659.f_271[bVar0] = iParam13;
		Global_1649593.f_4659.f_368[bVar0] = iParam14;
		Global_1649593.f_4659.f_379[bVar0] = iParam15;
		Global_1649593.f_4659.f_390[bVar0] = iParam16;
		Global_1649593.f_4659.f_227[bVar0] = iParam17;
	}
}

void func_95(int iParam0, bool bParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1649593.f_7009[iParam0]), bParam1);
}

int func_96(int iParam0, int iParam1)
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_97()
{
	int iVar0;
	
	switch (iLocal_1211)
	{
		case 0:
			if (!func_28())
			{
				if (!unk_0x55B23FE400FCEA6B(uLocal_1054[0], 0))
				{
					unk_0xC89EA639A6F338A6(uLocal_1054[0]);
				}
				if (!unk_0x55B23FE400FCEA6B(uLocal_1054[1], 0))
				{
					unk_0xC89EA639A6F338A6(uLocal_1054[1]);
				}
				iVar0 = func_101();
				if (bLocal_1161)
				{
					if (!iLocal_1177)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1368, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_1177 = 1;
						}
					}
				}
				else if (!bLocal_1168 && unk_0xF68107C40359970C(iLocal_1050))
				{
					if (!iLocal_1177)
					{
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1368, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_1177 = 1;
						}
					}
				}
				if (!func_58(&uLocal_1343))
				{
					func_55(&uLocal_1343);
				}
				else
				{
					func_56(&uLocal_1343);
				}
				iLocal_1211 = 1;
			}
			break;
		
		case 1:
			iLocal_1211 = 2;
			break;
		
		case 2:
			if (iLocal_1177 || !unk_0xF68107C40359970C(iLocal_1050))
			{
				if (!func_28() && !bLocal_1161)
				{
					if (!iLocal_1175)
					{
						iVar0 = func_101();
						func_34(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1368, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_1175 = 1;
						}
					}
					else if (!bLocal_1185 && unk_0xF68107C40359970C(iLocal_1050))
					{
						iVar0 = func_101();
						func_100(iVar0);
					}
				}
			}
			else if (bLocal_1161)
			{
				if (!iLocal_1177)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1368, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_1177 = 1;
					}
				}
			}
			else if (!bLocal_1168)
			{
				if (!iLocal_1177)
				{
					func_34(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1368, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_1177 = 1;
					}
				}
			}
			if (func_99(iLocal_1049))
			{
				fLocal_1248 = 2.5f;
			}
			else
			{
				fLocal_1248 = 5f;
			}
			if (func_58(&uLocal_1343))
			{
				if ((func_52(&uLocal_1343) > fLocal_1248 && func_98()) || unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()))
				{
					func_3();
					if (!iLocal_1138)
					{
						iLocal_1138 = 1;
						iLocal_1182 = 1;
					}
					iLocal_1162 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_98()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1054[iVar0]) && !unk_0x55B23FE400FCEA6B(uLocal_1054[iVar0], 0))
		{
			unk_0x3E3D339BAD67F6F2(uLocal_1054[iVar0], 85, 1);
			if (unk_0x7E006F2E24F03BB4(uLocal_1054[iVar0], unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1058[iVar0]) && !unk_0x55B23FE400FCEA6B(uLocal_1058[iVar0], 0))
		{
			unk_0x3E3D339BAD67F6F2(uLocal_1058[iVar0], 85, 1);
			if (unk_0x7E006F2E24F03BB4(uLocal_1058[iVar0], unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1051[iVar0]) && !unk_0x55B23FE400FCEA6B(iLocal_1051[iVar0], 0))
		{
			unk_0x3E3D339BAD67F6F2(iLocal_1051[iVar0], 85, 1);
			if (unk_0x7E006F2E24F03BB4(iLocal_1051[iVar0], unk_0xE2D3D51028F0428A()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xD132EDDA78FF4A51(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !unk_0xD132EDDA78FF4A51(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_100(int iParam0)
{
	if (!bLocal_1185)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1050) && unk_0xF68107C40359970C(iLocal_1050))
		{
			if (!func_28())
			{
				if ((unk_0xE5965CDF24F93A9F(iParam0) && !unk_0xF68107C40359970C(iParam0)) && func_29(iParam0, 1) < 75f)
				{
					func_34(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1368, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1185 = true;
				}
			}
		}
	}
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1054[iVar1]) && !unk_0xF68107C40359970C(uLocal_1054[iVar1]))
		{
			iVar0 = uLocal_1054[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xE5965CDF24F93A9F(uLocal_1058[iVar1]) && !unk_0xF68107C40359970C(uLocal_1058[iVar1]))
			{
				iVar0 = uLocal_1058[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_1051[iVar1]) && !unk_0xF68107C40359970C(iLocal_1051[iVar1]))
			{
				iVar0 = iLocal_1051[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_102()
{
	func_109();
	if (!iLocal_1162)
	{
		if (!iLocal_1138)
		{
			if (func_103(&iLocal_1048))
			{
				iLocal_1138 = 1;
			}
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_1138)
	{
		if (iLocal_1172 && !bLocal_1141)
		{
			if (func_108(&iLocal_1048))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (unk_0x5007A91D57C39FFC(iLocal_1049, 4))
		{
			if (unk_0xE323E6755636A70E(iLocal_1049))
			{
				fVar1 = func_32(unk_0xE2D3D51028F0428A(), -1230.599f, -196.5408f, 38.1528f, 1);
				unk_0xA7E29842FA438ED6(iLocal_1049, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_1050))
					{
						iLocal_1162 = 1;
						iLocal_1160 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_107(iLocal_1316) || func_106(iLocal_1316)) || (unk_0xE5965CDF24F93A9F(iLocal_1316) && unk_0x0747E45CFF1F74AA(iLocal_1316, iLocal_1049, 1)))
		{
			return 1;
		}
		if (func_107(iLocal_1317) || (unk_0xE5965CDF24F93A9F(iLocal_1317) && unk_0x0747E45CFF1F74AA(iLocal_1317, iLocal_1049, 1)))
		{
			return 1;
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_1316) && !unk_0x55B23FE400FCEA6B(iLocal_1316, 0))
		{
			if (unk_0xF6F5D18EF8EAB859(iLocal_1049, iLocal_1316, 0))
			{
				unk_0x909FF2867C7E0CAE(iLocal_1316, 1);
				unk_0x32C1B93FD1667DDB(iLocal_1316);
				return 1;
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_1316))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iLocal_1049, 0))
				{
					iVar0 = unk_0xB3FF0049C1FD38EC(iLocal_1049, 0);
					if (unk_0x72F6AE51B7E34865(iVar0, iLocal_1316) || (bLocal_1148 && unk_0x671CB92F637FDB33(iVar0, iLocal_1316)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_1035 == 12)
		{
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (func_30(iLocal_1049, iLocal_1316, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_1037[0] == 2 || iLocal_1037[1] == 2) || iLocal_1037[2] == 2)
		{
			if (func_105())
			{
				return 1;
			}
		}
		if (iLocal_1035 < 11)
		{
			if (unk_0x89D0E0233F6E59A7(-1, Local_1312, fLocal_1315))
			{
				return 1;
			}
		}
		else if (unk_0x89D0E0233F6E59A7(-1, Local_1312, fLocal_1315))
		{
			if (func_104())
			{
				iLocal_1192 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0x55E78B6AAFEF4EB8(unk_0x9E2D6C50374FCFA9()))
			{
				if ((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && unk_0x4C1B8C5717647539(0, 24)) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x4C1B8C5717647539(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_106(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xA09765D2ADE13CAE(iParam0) == 3 && unk_0x8DB5C2D06228DF32(iLocal_1049) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xAB793EA186AB8DAA(iParam0, -1, 0) != 0)
			{
				if (unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_30(unk_0xE2D3D51028F0428A(), iParam0, 1) < 40f)
						{
							if (unk_0xFD48978E4E1BAA06(unk_0x9E2D6C50374FCFA9(), &iVar1))
							{
								if ((unk_0x04D9F44466CBF3CA(iVar1) && unk_0x31EB55FAEEE9C0F5(iVar1) == iParam0) || (unk_0x9044EDB8A7BF67B4(iVar1) && unk_0x28AA31872A651BC7(iVar1) == unk_0xAB793EA186AB8DAA(iParam0, -1, 0)))
								{
									if ((unk_0x3C7ED37A9FE7C585(unk_0xE2D3D51028F0428A()) && unk_0x4C1B8C5717647539(0, 24)) || (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0x4C1B8C5717647539(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
	{
		if (unk_0xBC0CFDF47C99D84B(unk_0xE2D3D51028F0428A(), iLocal_1316, joaat("weapon_stickybomb"), -1))
		{
			if (unk_0x2767353D989432A3(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || unk_0x2767353D989432A3(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_109()
{
	int iVar0;
	
	func_150();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1054[iVar0]))
		{
			if (iLocal_1138 && !bLocal_1171)
			{
				func_149(uLocal_1054[iVar0], &(Local_1064[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1058[iVar0]))
		{
			if (iLocal_1138 && !bLocal_1171)
			{
				func_149(uLocal_1058[iVar0], &(Local_1089[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1051[iVar0]))
		{
			if (iLocal_1138 && !bLocal_1171)
			{
				func_149(iLocal_1051[iVar0], &(Local_1106[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0, -1, -1, 1, 0);
			}
			if (!unk_0xF68107C40359970C(iLocal_1051[iVar0]))
			{
				if (iLocal_1045[iVar0] == 4)
				{
					unk_0x3E3D339BAD67F6F2(iLocal_1051[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1208 == 0)
	{
		func_147(0);
	}
	else if (iLocal_1208 == 1)
	{
		func_147(1);
	}
	else if (iLocal_1208 == 2)
	{
		if (iLocal_1035 >= 9)
		{
			func_136(0);
		}
	}
	else if (iLocal_1208 == 3)
	{
		if (iLocal_1035 >= 9)
		{
			func_136(1);
		}
	}
	else if (iLocal_1208 == 4)
	{
		if (iLocal_1035 >= 9)
		{
			func_136(2);
			func_135(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1208 == 5)
	{
		func_110(0);
		func_135(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1208 == 6)
	{
		func_110(1);
		func_135(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1208++;
	if (iLocal_1208 > 6)
	{
		iLocal_1208 = 0;
	}
	if (iLocal_1138)
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
		{
			unk_0x3E3D339BAD67F6F2(iLocal_1050, 120, 1);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	iVar0 = uLocal_1058[iParam0];
	switch (iLocal_1041[iParam0])
	{
		case 0:
			if (iLocal_1151)
			{
				iLocal_1041[iParam0] = 1;
			}
			else if (bLocal_1149)
			{
				iLocal_1041[iParam0] = 3;
			}
			break;
		
		case 1:
			if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
			{
				if (func_134())
				{
					if (!unk_0x22FF01F89D3006C0(iLocal_1317))
					{
						if (unk_0xAB793EA186AB8DAA(iLocal_1317, -1, 0) == uLocal_1058[iParam0])
						{
							unk_0xA24707688BA83CEA(uLocal_1058[iParam0], iLocal_1317, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_1041[iParam0] = 2;
				}
				else
				{
					func_133(iParam0);
				}
			}
			break;
		
		case 2:
			if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
			{
				if (!unk_0x22FF01F89D3006C0(iLocal_1317))
				{
					Var1 = { unk_0x6B62510F212526DC(iLocal_1317, 1) };
					uVar4 = unk_0x82FE2343F8BDFF0B(iLocal_1317);
					iLocal_1151 = 0;
					iLocal_1041[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
			{
				if (!unk_0x55B23FE400FCEA6B(uLocal_1058[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(uLocal_1058[iParam0], iLocal_1317, 0) && unk_0x55A0C756C4A8220C(iLocal_1316, 0))
					{
						if (!iLocal_1138)
						{
							if (unk_0xAB793EA186AB8DAA(iLocal_1317, -1, 0) == uLocal_1058[iParam0])
							{
								if (unk_0x174CED88B97C78D9(uLocal_1058[iParam0], joaat("script_task_vehicle_mission")) != 1)
								{
									unk_0xDBEE353C7CA6E88E(uLocal_1058[iParam0], iLocal_1317, iLocal_1316, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (unk_0xAB793EA186AB8DAA(iLocal_1317, -1, 0) == uLocal_1058[iParam0])
						{
							if (!iLocal_1152)
							{
								if (unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
								{
									if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
									{
										unk_0xC1A74225341AA9FB(iVar0, unk_0xE2D3D51028F0428A(), 0, 16);
									}
									else
									{
										iLocal_1041[iParam0] = 8;
									}
								}
								else
								{
									unk_0xDBEE353C7CA6E88E(uLocal_1058[iParam0], iLocal_1317, iLocal_1316, -1, 45f, 786981, 10f, -1, 10f);
									unk_0x80E8BFE6E62212C1(iVar0, unk_0xE2D3D51028F0428A());
									iLocal_1152 = 1;
								}
							}
						}
						else if (!bLocal_1168)
						{
							if (unk_0x174CED88B97C78D9(uLocal_1058[iParam0], joaat("script_task_combat")) != 1)
							{
								if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									if (unk_0x207D53F9E0190691(iLocal_1317) < 5f)
									{
										iLocal_1041[iParam0] = 8;
									}
								}
								unk_0xC1A74225341AA9FB(iVar0, unk_0xE2D3D51028F0428A(), 0, 16);
							}
						}
						else if (unk_0x174CED88B97C78D9(uLocal_1058[iParam0], joaat("script_task_combat")) != 1)
						{
							unk_0xC1A74225341AA9FB(iVar0, unk_0xE2D3D51028F0428A(), 0, 16);
						}
					}
					else if (!iLocal_1162)
					{
						iLocal_1041[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_58(&uLocal_1337))
			{
				func_56(&uLocal_1337);
			}
			func_130(&(uLocal_1058[iParam0]));
			iLocal_1041[iParam0] = 5;
			break;
		
		case 5:
			if (!func_99(iLocal_1049))
			{
				if (func_52(&uLocal_1337) >= 27f || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
				{
					if (!unk_0xF68107C40359970C(iVar0))
					{
						if (unk_0x77A43AFA9AAEC041(iLocal_1049, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_129(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_133(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_1041[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_1163)
			{
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0xAB7639D658BBCCEE(0, 0, 0);
				unk_0xE1E1AF00CA06A2B7(0, func_128(), unk_0x5853B15F78E1A265(1000, 1500), 2048, 4);
				unk_0xE1E1AF00CA06A2B7(0, func_128(), unk_0x5853B15F78E1A265(2000, 2500), 2048, 4);
				unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), unk_0x5853B15F78E1A265(10000, 11000), 30f, 1f, 1073741824, 0);
				unk_0x60FAD147BB45A92A(0, unk_0xE2D3D51028F0428A(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xC963A45B50851768(uLocal_1328);
				if (!unk_0xF68107C40359970C(uLocal_1058[iParam0]))
				{
					unk_0x8ACADA903FCAA42F(uLocal_1058[iParam0], uLocal_1328);
				}
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			else
			{
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0xAB7639D658BBCCEE(0, 0, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), unk_0x5853B15F78E1A265(3000, 3500), 1, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), unk_0x5853B15F78E1A265(3000, 3500), 0, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), unk_0x5853B15F78E1A265(3000, 3500), 0, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), unk_0x5853B15F78E1A265(3000, 3500), 0, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), -1, 0, 0);
				unk_0xC963A45B50851768(uLocal_1328);
				if (!unk_0xF68107C40359970C(uLocal_1058[iParam0]))
				{
					unk_0x8ACADA903FCAA42F(uLocal_1058[iParam0], uLocal_1328);
				}
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			iLocal_1041[iParam0] = 7;
			break;
		
		case 7:
			if (!unk_0xF68107C40359970C(uLocal_1058[iParam0]))
			{
				if (unk_0x174CED88B97C78D9(uLocal_1058[iParam0], joaat("script_task_any")) != 1)
				{
					unk_0x0B47872E9D74882C(uLocal_1058[iParam0], iLocal_1049, iLocal_1049, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 8:
			if (iLocal_1048 != 4 && iLocal_1048 != 5)
			{
				func_127(iVar0);
			}
			else
			{
				func_126(iVar0);
			}
			iLocal_1041[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_1048 != 4)
				{
					func_125(iLocal_1317, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (!iLocal_1138)
	{
		if (iLocal_1162)
		{
			if (iLocal_1041[iParam0] != 6 && iLocal_1041[iParam0] != 7)
			{
				iLocal_1041[iParam0] = 6;
			}
		}
		else if (func_118(iVar0, iLocal_1317, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_117(iLocal_1317))
		{
			iVar5 = func_36(1116471296, 1);
			if (iVar5 != 0)
			{
				func_116(unk_0x6B62510F212526DC(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1138 = 1;
			}
		}
		else if (!bLocal_1141)
		{
			if (func_114(iVar0, 10f))
			{
				if (iLocal_1041[iParam0] != 4 && iLocal_1041[iParam0] != 5)
				{
					if (!bLocal_1139)
					{
						func_112(&Local_360, 4);
						iLocal_1041[iParam0] = 4;
					}
					else if (!func_99(iLocal_1049))
					{
						iLocal_1138 = 1;
						if (!unk_0xE5965CDF24F93A9F(iLocal_1050))
						{
							iLocal_1048 = 5;
						}
						iLocal_1041[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!unk_0xF68107C40359970C(iVar0))
	{
		if (unk_0xF6F5D18EF8EAB859(iVar0, iLocal_1317, 0))
		{
			if (((!unk_0x55A0C756C4A8220C(iLocal_1317, 0) || !unk_0x55A0C756C4A8220C(iLocal_1316, 0)) || iLocal_1150) || !bLocal_1141)
			{
				if (iLocal_1041[iParam0] < 8)
				{
					iLocal_1041[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1041[iParam0] < 8)
		{
			iLocal_1041[iParam0] = 8;
		}
	}
	func_111(iVar0, uLocal_1129[iParam0]);
}

void func_111(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0xF68107C40359970C(iParam0))
		{
			if (unk_0x12DD4A0B247D9B4D(uParam1))
			{
				unk_0xFFD8EB5462B07B59(&uParam1);
			}
		}
	}
}

void func_112(var uParam0, int iParam1)
{
	func_113(uParam0, iParam1);
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_114(int iParam0, float fParam1)
{
	if (!iLocal_1138)
	{
		if (!func_99(iLocal_1049))
		{
			if (unk_0xE5965CDF24F93A9F(iParam0))
			{
				if (!unk_0xF68107C40359970C(iParam0))
				{
					if (func_29(iParam0, 0) <= fParam1)
					{
						if (unk_0x2E7F5417D4F4DD69(iParam0, iLocal_1049, 120f))
						{
							if (unk_0xD936DBC1D824A1BE(iParam0, iLocal_1049, 17))
							{
								if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xE5965CDF24F93A9F(iParam0))
		{
			if (!unk_0xF68107C40359970C(iParam0))
			{
				if (unk_0x77A43AFA9AAEC041(iLocal_1049, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(iParam0, iLocal_1049, 120f))
					{
						if (unk_0xD936DBC1D824A1BE(iParam0, iLocal_1049, 17))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_115()
{
	if (iLocal_1162 || bLocal_1163)
	{
		return 1;
	}
	return 0;
}

void func_116(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		return;
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_1316))
	{
		return;
	}
	if (unk_0x55B23FE400FCEA6B(iLocal_1316, 0) || iLocal_1192)
	{
		bLocal_1161 = true;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		if (((unk_0xEEF1A3C0E56FC8FF(iLocal_1050, joaat("weapon_sniperrifle"), 0) || unk_0xEEF1A3C0E56FC8FF(iLocal_1050, joaat("weapon_heavysniper"), 0)) || unk_0xEEF1A3C0E56FC8FF(iLocal_1050, joaat("weapon_remotesniper"), 0)) || unk_0xEEF1A3C0E56FC8FF(iLocal_1050, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_1160 = 1;
			iLocal_1036 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8)
	{
		if (!unk_0x22FF01F89D3006C0(iLocal_1316))
		{
			fParam3 = (fParam3 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_1138)
	{
		if ((iLocal_1160 || bLocal_1161) || iVar0)
		{
			fVar1 = func_32(unk_0xE2D3D51028F0428A(), Param0, 1);
			if (fVar1 > fParam3)
			{
				iLocal_1162 = 1;
				if (fVar1 > fParam4)
				{
					bLocal_1163 = true;
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
					if (unk_0xE5965CDF24F93A9F(iVar0) && unk_0x55A0C756C4A8220C(iVar0, 0))
					{
						fVar1 = unk_0x207D53F9E0190691(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0x72F6AE51B7E34865(iVar0, iParam0) || unk_0x0747E45CFF1F74AA(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_118(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xE2D3D51028F0428A();
	if (!unk_0x55B23FE400FCEA6B(iVar0, 0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (!func_124(*uParam2, 1))
		{
			if (func_123(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_124(*uParam2, 2))
		{
			if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_124(*uParam2, 4))
		{
			if (func_122(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_124(*uParam2, 8))
		{
			if (func_121(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_124(*uParam2, 128);
		if (bParam4)
		{
			if (func_119(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_124(*uParam2, 16))
		{
			if (func_119(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (iParam7 && unk_0x0747E45CFF1F74AA(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_356)
		{
			iLocal_357 = unk_0x0CF63873D754B965(iParam0);
			bLocal_356 = true;
		}
		iLocal_358 = unk_0x0CF63873D754B965(iParam0);
		iLocal_359 = (iLocal_357 - iLocal_358);
		iVar0 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_356)
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
			{
				if (IntToFloat(iLocal_359) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0747E45CFF1F74AA(iParam0, unk_0xE2D3D51028F0428A(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x9993EF7FDBCDB632();
		if (!unk_0x55B23FE400FCEA6B(iVar1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (unk_0x177106D5E97D1958(iParam0))
			{
				if (unk_0xBA67EB7A53262B5B(iParam0) == unk_0xE2D3D51028F0428A())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7A6B8C262362C722(unk_0xE2D3D51028F0428A()))
		{
			if (unk_0x8F41785F110B0DA0(iParam0, unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x51223AB40E2F620E(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x06FF19E64D0C2827(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xE573ACA59D8C5C18(iParam0))
		{
			return 1;
		}
	}
	if (func_120(unk_0xE2D3D51028F0428A(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x32DCDA1B2F8A0694(iParam0) && func_29(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), unk_0xB3FF0049C1FD38EC(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x72F6AE51B7E34865(unk_0xE2D3D51028F0428A(), iParam0))
		{
			return 1;
		}
		if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
		{
			if (unk_0x0747E45CFF1F74AA(iParam1, unk_0xE2D3D51028F0428A(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xE323E6755636A70E(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(iParam1, 1)) < 2.5f)
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x5007A91D57C39FFC(iParam0, 4))
	{
		if (unk_0xE323E6755636A70E(iParam0) && !unk_0x807D601FA146717A(iParam0))
		{
			if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	if (unk_0x9AC74C7EF847A074(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x81C70E8A536AAC9E(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x5007A91D57C39FFC(iParam0, 2))
	{
		if (unk_0xE323E6755636A70E(iParam0))
		{
			if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0x28AA31872A651BC7(iParam1), 0))
			{
				iVar3 = unk_0xB3FF0049C1FD38EC(unk_0x28AA31872A651BC7(iParam1), 0);
			}
			if (unk_0x3DA4842FA4407BE2(iParam0) || func_107(iVar3))
			{
				if (unk_0x8F41785F110B0DA0(iParam1, unk_0x6B62510F212526DC(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x2E7F5417D4F4DD69(unk_0x28AA31872A651BC7(iParam1), iParam0, 120f) && unk_0xD936DBC1D824A1BE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x863026E0C5C2E52B((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0, var uParam1)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x5007A91D57C39FFC(unk_0xE2D3D51028F0428A(), 6))
		{
			if (unk_0x24E6C39AAC2154D0(unk_0x9E2D6C50374FCFA9(), iParam0) || unk_0x8BF92A6D56A911EB(unk_0x9E2D6C50374FCFA9(), iParam0))
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, unk_0xE2D3D51028F0428A(), 90f))
				{
					if (func_29(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x320D1840B6DAA1CC();
						}
						else if ((unk_0x320D1840B6DAA1CC() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_125(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xF68107C40359970C(iParam1))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				if (func_30(iParam1, iParam0, 0) > fParam2 && func_29(iParam1, 1) < fParam3)
				{
					if (!unk_0xF6F5D18EF8EAB859(iParam1, iParam0, 0))
					{
						if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_enter_vehicle")) != 1)
						{
							unk_0xB486640392EC50BB(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_vehicle_mission")) != 1)
					{
						unk_0xFE5A02CF2178B6A8(iParam1, iParam0, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x80E8BFE6E62212C1(iParam1, unk_0xE2D3D51028F0428A());
					}
				}
				else if (!unk_0xF6F5D18EF8EAB859(iParam1, iParam0, 0))
				{
					if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_combat")) != 1)
					{
						unk_0xC1A74225341AA9FB(iParam1, unk_0xE2D3D51028F0428A(), 0, 16);
					}
				}
			}
			else if (unk_0xF6F5D18EF8EAB859(iParam1, iParam0, 0))
			{
				if (func_29(iParam1, 1) > fParam4)
				{
					if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_vehicle_mission")) != 1)
					{
						unk_0xB69D13E19147910F(iParam1, iParam0, unk_0xE2D3D51028F0428A(), 6, 35f, 786469, -1f, -1f, 1);
						unk_0x80E8BFE6E62212C1(iParam1, unk_0xE2D3D51028F0428A());
					}
				}
				else if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_combat")) != 1)
				{
					unk_0xC1A74225341AA9FB(iParam1, unk_0xE2D3D51028F0428A(), 0, 16);
				}
			}
		}
		else if (unk_0x174CED88B97C78D9(iParam1, joaat("script_task_combat")) != 1)
		{
			unk_0xC1A74225341AA9FB(iParam1, unk_0xE2D3D51028F0428A(), 0, 16);
		}
	}
}

void func_126(int iParam0)
{
	var uVar0;
	
	if (!unk_0xF68107C40359970C(iLocal_1049) && !unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			unk_0xBC12D08EE7559CCD(iParam0, 3, 1);
		}
		unk_0x7461D7C5BA953BC7(&uVar0);
		unk_0xA888F8CC04F25CC8(&uVar0);
		unk_0xAB7639D658BBCCEE(0, 0, 256);
		unk_0x636B3584208A6D73(0, iLocal_1049, -1, 0);
		unk_0xC963A45B50851768(uVar0);
		unk_0x8ACADA903FCAA42F(iParam0, uVar0);
		unk_0x7461D7C5BA953BC7(&uVar0);
	}
}

void func_127(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iLocal_1049, 0))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(iLocal_1049, 0))
		{
			if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
			{
				unk_0xBC12D08EE7559CCD(iParam0, 3, 1);
			}
			unk_0x7461D7C5BA953BC7(&uLocal_1328);
			unk_0xA888F8CC04F25CC8(&uLocal_1328);
			unk_0xAB7639D658BBCCEE(0, 0, 256);
			unk_0xC1A74225341AA9FB(0, iLocal_1049, 0, 16);
			unk_0xC963A45B50851768(uLocal_1328);
			if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
			{
				unk_0x8ACADA903FCAA42F(iParam0, uLocal_1328);
			}
			unk_0x7461D7C5BA953BC7(&uLocal_1328);
		}
		else if (!unk_0xF68107C40359970C(iParam0))
		{
			if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_combat")) != 1)
			{
				unk_0x03A927199A2DFE46(iParam0);
				unk_0xC1A74225341AA9FB(iParam0, iLocal_1049, 0, 16);
			}
		}
	}
}

Vector3 func_128()
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = (unk_0x5853B15F78E1A265(0, 65535) % 3);
	switch (iVar3)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_129(int iParam0, struct<3> Param1)
{
	if (!iLocal_1138)
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (unk_0x77A43AFA9AAEC041(iLocal_1049, iParam0, Param1, 0, 1, 0))
			{
				if (unk_0x2E7F5417D4F4DD69(iParam0, iLocal_1049, 160f))
				{
					if (unk_0xD936DBC1D824A1BE(iParam0, iLocal_1049, 17))
					{
						unk_0x0B47872E9D74882C(iParam0, iLocal_1049, iLocal_1049, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_1048 = 5;
						iLocal_1138 = 1;
					}
				}
			}
			else if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
			{
				if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1)
				{
					unk_0x0B47872E9D74882C(iParam0, iLocal_1049, iLocal_1049, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_130(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_1061 == 0)
	{
		iLocal_1061 = func_36(70f, 0);
	}
	if (!unk_0xF68107C40359970C(*iParam0))
	{
		if (!unk_0xD5C6B5E3B93A5EDC(*iParam0, 0))
		{
			if (!iLocal_1140)
			{
				if (*iParam0 == iLocal_1061)
				{
					unk_0x7461D7C5BA953BC7(&uVar0);
					unk_0xA888F8CC04F25CC8(&uVar0);
					unk_0xC149E50FBB27DD70(0, iLocal_1049, 20000, 2f, 1f, 1073741824, 0);
					unk_0x529D306014D3C29A(0, iLocal_1049, -1);
					unk_0xC963A45B50851768(uVar0);
					unk_0x8ACADA903FCAA42F(*iParam0, uVar0);
					unk_0x7461D7C5BA953BC7(&uVar0);
					iLocal_1140 = 1;
					Var1 = { unk_0x6B62510F212526DC(*iParam0, 1) };
				}
				else if (unk_0x174CED88B97C78D9(*iParam0, joaat("script_task_go_to_entity")) != 1)
				{
					unk_0x529D306014D3C29A(*iParam0, iLocal_1049, -1);
				}
			}
			else if (*iParam0 != iLocal_1061)
			{
				if (unk_0x174CED88B97C78D9(*iParam0, joaat("script_task_go_to_entity")) != 1)
				{
					unk_0x529D306014D3C29A(*iParam0, iLocal_1049, -1);
				}
			}
		}
		unk_0xA7266A50941DBAEA(*iParam0, 1);
		func_131();
	}
}

void func_131()
{
	int iVar0;
	
	if (!iLocal_1142)
	{
		if (!bLocal_1153)
		{
			if (!func_28())
			{
				iVar0 = func_36(1116471296, 1);
				func_34(iVar0, 3, "OJAvaGUARD");
				if (func_132())
				{
					func_6(&uLocal_1368, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1142 = 1;
				}
				else
				{
					func_33(&uLocal_1368, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1142 = 1;
				}
			}
		}
	}
}

int func_132()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
		if (!unk_0x55B23FE400FCEA6B(iLocal_1316, 0))
		{
			Var3 = { unk_0x6B62510F212526DC(iLocal_1316, 1) };
		}
		fVar6 = unk_0xB7A628320EFF8E47(Var0, Var3);
		if (fVar6 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0)
{
	int iVar0;
	
	bLocal_1139 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!unk_0x55B23FE400FCEA6B(uLocal_1058[iParam0], 0))
	{
		if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
		{
			if (!unk_0xF6F5D18EF8EAB859(uLocal_1058[iParam0], iLocal_1317, 0))
			{
				if (unk_0x174CED88B97C78D9(uLocal_1058[iParam0], joaat("script_task_enter_vehicle")) != 1)
				{
					unk_0xB486640392EC50BB(uLocal_1058[iParam0], iLocal_1317, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_134()
{
	if (!unk_0xF68107C40359970C(uLocal_1058[0]) && !unk_0xF68107C40359970C(uLocal_1058[1]))
	{
		if (unk_0xF6F5D18EF8EAB859(uLocal_1058[0], iLocal_1317, 0) && unk_0xF6F5D18EF8EAB859(uLocal_1058[1], iLocal_1317, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_135(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (!iLocal_1138)
	{
		if (unk_0x2767353D989432A3(Param0, Param3, fParam6, joaat("weapon_stickybomb"), 0))
		{
			iLocal_1138 = 1;
		}
	}
}

void func_136(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_1054[iParam0];
	switch (iLocal_1037[iParam0])
	{
		case 0:
			if (!unk_0xF68107C40359970C(iVar0))
			{
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0x9603C0EC536C6425(0, Local_1272[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				unk_0x30E00B59448AB97E(0, fLocal_1225[iParam0], 0);
				unk_0xC963A45B50851768(uLocal_1328);
				unk_0x8ACADA903FCAA42F(iVar0, uLocal_1328);
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
				iLocal_1037[iParam0] = 1;
			}
			break;
		
		case 1:
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
				{
					if (!bLocal_1173)
					{
						if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_play_anim")) != 1 && unk_0x174CED88B97C78D9(iVar0, joaat("script_task_perform_sequence")) != 1)
						{
							if (unk_0x8F41785F110B0DA0(iVar0, Local_1272[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_144(iVar0, &(uLocal_1200[iParam0]), 1);
							}
							else
							{
								iLocal_1037[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_58(&uLocal_1337))
			{
				func_56(&uLocal_1337);
				func_130(&iVar0);
				iLocal_1037[iParam0] = 2;
			}
			else if (func_52(&uLocal_1337) > uLocal_1231[iParam0] || unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				func_130(&iVar0);
				iLocal_1037[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_99(iLocal_1049))
			{
				iLocal_1166 = 1;
				if (bLocal_1165)
				{
					iLocal_1037[iParam0] = 4;
					break;
				}
				else if (func_52(&uLocal_1337) >= 27f && iLocal_1142)
				{
					func_129(iVar0, 15f, 15f, 3f);
				}
				else if (func_52(&uLocal_1337) >= 15f)
				{
					func_142(iVar0);
				}
			}
			else
			{
				iLocal_1166 = 0;
				bLocal_1139 = true;
				if (!bLocal_1159)
				{
					iLocal_1037[iParam0] = 0;
				}
				else
				{
					iLocal_1037[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!unk_0xF68107C40359970C(iVar0))
			{
				unk_0xA7266A50941DBAEA(iVar0, 1);
				unk_0x3E3D339BAD67F6F2(iVar0, 60, 1);
			}
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (!unk_0xF68107C40359970C(iVar0))
				{
					if (iParam0 == 0)
					{
						unk_0xF30F15F203736DE4(uLocal_1054[0], uLocal_1054[1], -1, 0, 2);
						if (!unk_0xF6F5D18EF8EAB859(iVar0, iLocal_1316, 0))
						{
							unk_0xB486640392EC50BB(iVar0, iLocal_1316, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						unk_0xF30F15F203736DE4(uLocal_1054[1], uLocal_1054[0], -1, 0, 2);
						if (!unk_0xF6F5D18EF8EAB859(iVar0, iLocal_1316, 0))
						{
							unk_0xB486640392EC50BB(iVar0, iLocal_1316, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
						{
							if (!unk_0xF6F5D18EF8EAB859(iVar0, iLocal_1317, 0))
							{
								unk_0xB486640392EC50BB(iVar0, iLocal_1317, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_1037[iParam0] = 5;
			}
			else
			{
				iLocal_1037[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!unk_0xF68107C40359970C(iVar0))
			{
				unk_0x3E3D339BAD67F6F2(iVar0, 60, 1);
			}
			if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
			{
				if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_look_at_entity")) != 1)
				{
					if (iParam0 == 0)
					{
						unk_0xF30F15F203736DE4(uLocal_1054[iParam0], uLocal_1054[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						unk_0xF30F15F203736DE4(uLocal_1054[iParam0], uLocal_1054[0], -1, 2048, 4);
					}
				}
			}
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (!func_140())
				{
					if (iLocal_1138)
					{
						if (!unk_0xF68107C40359970C(iVar0))
						{
							if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_combat")) != 1)
							{
								if (func_139(uLocal_1054[0]))
								{
									unk_0xC89EA639A6F338A6(uLocal_1054[0]);
								}
								if (func_139(uLocal_1054[1]))
								{
									unk_0xC89EA639A6F338A6(uLocal_1054[1]);
								}
								unk_0xC1A74225341AA9FB(iVar0, iLocal_1049, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_1037[iParam0] = 6;
				}
			}
			else
			{
				iLocal_1037[iParam0] = 10;
			}
			if (bLocal_1154)
			{
				if (iLocal_1037[iParam0] != 10 && iLocal_1037[iParam0] != 11)
				{
					iLocal_1037[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_1138)
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
				{
					if (unk_0xAB793EA186AB8DAA(iLocal_1316, -1, 0) == iVar0)
					{
						if (!unk_0xF68107C40359970C(iVar0))
						{
							unk_0x371D594409A68A18(iLocal_1316, 1, 1, 0);
							if (func_138())
							{
								unk_0xA24707688BA83CEA(iVar0, iLocal_1316, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								unk_0xA24707688BA83CEA(iVar0, iLocal_1316, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_1037[iParam0] = 7;
				}
			}
			else
			{
				if (func_139(uLocal_1054[0]))
				{
					unk_0xC89EA639A6F338A6(uLocal_1054[0]);
				}
				if (func_139(uLocal_1054[1]))
				{
					unk_0xC89EA639A6F338A6(uLocal_1054[1]);
				}
				iLocal_1037[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_1138)
			{
				if ((unk_0x55A0C756C4A8220C(iLocal_1316, 0) && unk_0xAB793EA186AB8DAA(iLocal_1316, -1, 0) == iVar0) && unk_0xAB793EA186AB8DAA(iLocal_1316, 1, 0) == iLocal_1050)
				{
					if (!unk_0xF68107C40359970C(iVar0))
					{
						if (bLocal_1153 || (iLocal_1167 && !unk_0x22FF01F89D3006C0(iLocal_1316)))
						{
							unk_0x03A927199A2DFE46(iVar0);
							if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
							{
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_vehicle_mission")) != 1)
									{
										unk_0xFE5A02CF2178B6A8(iVar0, iLocal_1316, unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_vehicle_mission")) != 1)
								{
									unk_0xB69D13E19147910F(iVar0, iLocal_1316, unk_0xE2D3D51028F0428A(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!unk_0xF68107C40359970C(iVar0))
				{
					if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_combat")) != 1)
					{
						unk_0xC1A74225341AA9FB(iVar0, iLocal_1049, 0, 16);
					}
				}
			}
			else if (bLocal_1153 || (iLocal_1167 && !unk_0x22FF01F89D3006C0(iLocal_1316)))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
				{
					if (unk_0xAB793EA186AB8DAA(iLocal_1316, -1, 0) == iVar0)
					{
						if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
						{
							if (unk_0x174CED88B97C78D9(iVar0, joaat("script_task_vehicle_mission")) != 1)
							{
								unk_0xFDB121077308E944(iVar0, iLocal_1316, Local_1294, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_1163)
			{
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0xAB7639D658BBCCEE(0, 0, 0);
				unk_0xE1E1AF00CA06A2B7(0, func_128(), unk_0x5853B15F78E1A265(1000, 1500), 2048, 4);
				unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), unk_0x5853B15F78E1A265(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x60FAD147BB45A92A(0, unk_0xE2D3D51028F0428A(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xC963A45B50851768(uLocal_1328);
				if (!unk_0x55B23FE400FCEA6B(uLocal_1054[iParam0], 0))
				{
					unk_0x8ACADA903FCAA42F(uLocal_1054[iParam0], uLocal_1328);
				}
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			else
			{
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0xAB7639D658BBCCEE(0, 0, 0);
				unk_0x2EA72CDBFACD9E92(0, func_128(), unk_0x5853B15F78E1A265(3000, 3500), 1, 0);
				unk_0x60FAD147BB45A92A(0, unk_0xE2D3D51028F0428A(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xC963A45B50851768(uLocal_1328);
				if (!unk_0x55B23FE400FCEA6B(uLocal_1054[iParam0], 0))
				{
					unk_0x8ACADA903FCAA42F(uLocal_1054[iParam0], uLocal_1328);
				}
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			iLocal_1037[iParam0] = 9;
			break;
		
		case 9:
			if (!unk_0xF68107C40359970C(uLocal_1054[iParam0]))
			{
				if (unk_0x174CED88B97C78D9(uLocal_1054[iParam0], joaat("script_task_any")) != 1)
				{
					unk_0x0B47872E9D74882C(uLocal_1054[iParam0], iLocal_1049, iLocal_1049, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
			break;
		
		case 10:
			if (iLocal_1048 == 4 || iLocal_1048 == 5)
			{
				func_126(iVar0);
			}
			else if (iLocal_1048 != 8)
			{
				func_127(iVar0);
				iLocal_1037[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_125(iLocal_1316, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (iLocal_1035 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1238;
	}
	if (!iLocal_1138)
	{
		if (iLocal_1162)
		{
			if (iLocal_1037[iParam0] != 8 && iLocal_1037[iParam0] != 9)
			{
				iLocal_1037[iParam0] = 8;
			}
		}
		else if (func_137(iVar0))
		{
			iVar2 = func_36(1116471296, 1);
			if (iVar2 != 0)
			{
				func_116(unk_0x6B62510F212526DC(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1138 = 1;
			}
		}
		else if (!bLocal_1141)
		{
			if (func_114(iVar0, fVar1))
			{
				if ((iLocal_1037[iParam0] != 3 && iLocal_1037[iParam0] != 2) && !bLocal_1165)
				{
					if (!bLocal_1139)
					{
						func_112(&Local_360, 4);
						iLocal_1037[iParam0] = 3;
					}
					else if (!func_99(iLocal_1049))
					{
						iLocal_1138 = 1;
						if (!unk_0xE5965CDF24F93A9F(iLocal_1050))
						{
							iLocal_1048 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_1037[iParam0] != 10 && iLocal_1037[iParam0] != 11) && iLocal_1037[iParam0] != 7)
	{
		iLocal_1037[iParam0] = 10;
	}
	func_111(iVar0, uLocal_1125[iParam0]);
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!iLocal_1138)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0))
		{
			if (!unk_0xF68107C40359970C(iParam0))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
				{
					iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_118(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || (unk_0x32DCDA1B2F8A0694(iParam0) && func_29(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_138()
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1216 = unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &iVar1);
	uLocal_1216 = uLocal_1216;
	uLocal_1216 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE5965CDF24F93A9F(iVar1[iVar0]) && !unk_0x55B23FE400FCEA6B(iVar1[iVar0], 0))
		{
			if (unk_0xD132EDDA78FF4A51(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1215++;
			}
		}
		iVar0++;
	}
	if (iLocal_1215 >= 1)
	{
		iLocal_1167 = 1;
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
	{
		if (!unk_0xF68107C40359970C(iLocal_1050))
		{
			if (!iLocal_1138)
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_1050, iLocal_1316, 0) && func_141())
				{
					return 1;
				}
			}
			else if (unk_0xF6F5D18EF8EAB859(iLocal_1050, iLocal_1316, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!unk_0xF68107C40359970C(iLocal_1051[iVar0]))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(iLocal_1051[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(int iParam0)
{
	switch (iLocal_1212)
	{
		case 0:
			if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
			{
				if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
				{
					unk_0x636B3584208A6D73(iParam0, unk_0xE2D3D51028F0428A(), -1, 0);
				}
				func_34(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1368, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_1142 = 1;
				iLocal_1212 = 1;
			}
			break;
		
		case 1:
			func_143(iParam0);
			break;
	}
}

void func_143(int iParam0)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (func_29(iParam0, 1) < 5f)
		{
			if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && unk_0x174CED88B97C78D9(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
			{
				unk_0x636B3584208A6D73(iParam0, iLocal_1049, -1, 0);
			}
		}
		else if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1)
		{
			if (iParam0 == iLocal_1061)
			{
				unk_0x0B47872E9D74882C(iParam0, iLocal_1049, iLocal_1049, 1f, 0, -1f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_aim_gun_at_entity")) != 1)
			{
				unk_0x636B3584208A6D73(iParam0, iLocal_1049, -1, 0);
			}
		}
	}
}

void func_144(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (bParam2)
		{
			func_145(iParam0, uParam1);
		}
	}
}

void func_145(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_146(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		unk_0x49D97B076E3590AC(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, unk_0xC4EAB25A108C2429(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		unk_0x49D97B076E3590AC(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, unk_0xC4EAB25A108C2429(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		unk_0x49D97B076E3590AC(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, unk_0xC4EAB25A108C2429(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		unk_0x49D97B076E3590AC(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, unk_0xC4EAB25A108C2429(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = unk_0x5853B15F78E1A265(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = unk_0x5853B15F78E1A265(iParam0, iParam1);
	}
	return iVar0;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!unk_0xE5965CDF24F93A9F(iLocal_1051[iParam0]))
	{
		return;
	}
	switch (iLocal_1045[iParam0])
	{
		case 0:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(iLocal_1050, 0))
				{
					if (!unk_0xF68107C40359970C(iLocal_1051[iParam0]))
					{
						if (iParam0 == 0)
						{
							unk_0x6FCE069E4940878C(iLocal_1051[iParam0], iLocal_1050, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (unk_0x55A0C756C4A8220C(iLocal_1317, 0))
							{
								unk_0xA888F8CC04F25CC8(&uVar2);
								unk_0x9603C0EC536C6425(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								unk_0xC9FEFB406C44F60B(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								unk_0xB486640392EC50BB(0, iLocal_1317, 30000, 2, 1f, 1, 0);
								unk_0xC963A45B50851768(uVar2);
								unk_0x8ACADA903FCAA42F(iLocal_1051[iParam0], uVar2);
								unk_0x7461D7C5BA953BC7(&uVar2);
							}
						}
						iLocal_1045[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1316;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1317;
				iVar1 = 2;
			}
			if (!unk_0x55B23FE400FCEA6B(iLocal_1051[iParam0], 0))
			{
				if (unk_0x55A0C756C4A8220C(iVar0, 0))
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_1051[iParam0], 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(iLocal_1051[iParam0], iVar0, 0))
						{
							if (unk_0xD5C6B5E3B93A5EDC(iLocal_1050, 0))
							{
								if (unk_0x174CED88B97C78D9(iLocal_1051[iParam0], joaat("script_task_enter_vehicle")) != 1)
								{
									unk_0xB486640392EC50BB(iLocal_1051[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_1045[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1316;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1317;
			}
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (!unk_0x55B23FE400FCEA6B(iLocal_1051[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(iLocal_1051[iParam0], iVar0, 0) && unk_0x55A0C756C4A8220C(iLocal_1316, 0))
					{
						if (iLocal_1138)
						{
							if (!bLocal_1168)
							{
								if (unk_0x174CED88B97C78D9(iLocal_1051[iParam0], joaat("script_task_combat")) != 1)
								{
									if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
									{
										if (unk_0x207D53F9E0190691(iVar0) < 5f)
										{
											iLocal_1045[iParam0] = 5;
										}
									}
									unk_0xC1A74225341AA9FB(iLocal_1051[iParam0], unk_0xE2D3D51028F0428A(), 0, 16);
								}
							}
							else if (unk_0x174CED88B97C78D9(iLocal_1051[iParam0], joaat("script_task_combat")) != 1)
							{
								unk_0xC1A74225341AA9FB(iLocal_1051[iParam0], unk_0xE2D3D51028F0428A(), 0, 16);
							}
						}
					}
					else if (!iLocal_1162)
					{
						iLocal_1045[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xF68107C40359970C(iLocal_1051[iParam0]))
			{
				if (unk_0xBFF766829E7783C7(iLocal_1051[iParam0]))
				{
					unk_0x41FBE02637A70478(iLocal_1051[iParam0]);
				}
			}
			if (bLocal_1163)
			{
				unk_0xA888F8CC04F25CC8(&uLocal_1328);
				unk_0xAB7639D658BBCCEE(0, 0, 0);
				unk_0xE1E1AF00CA06A2B7(0, func_128(), unk_0x5853B15F78E1A265(2000, 2500), 2048, 4);
				unk_0xC149E50FBB27DD70(0, unk_0xE2D3D51028F0428A(), unk_0x5853B15F78E1A265(15000, 16000), 30f, 1f, 1073741824, 0);
				unk_0x60FAD147BB45A92A(0, unk_0xE2D3D51028F0428A(), func_128(), 1f, 0, 1056964608, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xC963A45B50851768(uLocal_1328);
				unk_0x8ACADA903FCAA42F(iLocal_1051[iParam0], uLocal_1328);
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			else if (!unk_0xF68107C40359970C(iLocal_1051[iParam0]))
			{
				unk_0x1EE49ABA6B11E9CF(iLocal_1051[iParam0], Local_1309, 15f, 0, 0);
				unk_0x71B502FC2E129665(iLocal_1051[iParam0], 1);
				unk_0xBC12D08EE7559CCD(iLocal_1051[iParam0], 0, 1);
				unk_0xCAC4D1050F2E6899(iLocal_1051[iParam0], 2f);
				if (!iLocal_1135 && !unk_0xD5C6B5E3B93A5EDC(iLocal_1051[iParam0], 0))
				{
					unk_0xA888F8CC04F25CC8(&uLocal_1328);
					if (unk_0xF68107C40359970C(iLocal_1050))
					{
						unk_0x49D97B076E3590AC(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						unk_0x2EA72CDBFACD9E92(0, func_128(), 3000, 0, 1);
						unk_0x636B3584208A6D73(0, unk_0xE2D3D51028F0428A(), -1, 0);
					}
					else
					{
						unk_0x49D97B076E3590AC(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						unk_0x6FCE069E4940878C(0, iLocal_1050, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					unk_0xC963A45B50851768(uLocal_1328);
					iLocal_1135 = 1;
				}
				else
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_1316) && unk_0x55A0C756C4A8220C(iLocal_1316, 0))
					{
						Var4 = { unk_0x96EDA732FD9DC0AF(iLocal_1316, unk_0x7F0054A115D66F44(iLocal_1316, "wheel_lr")) };
						Var7 = { unk_0x6B62510F212526DC(iLocal_1316, 1) };
						Var7 = { Var4 - Var7 };
						unk_0x776D1ABB5A5CC181(iLocal_1051[iParam0], iLocal_1316, Var7, 1.5f, 0);
					}
					unk_0xA888F8CC04F25CC8(&uLocal_1328);
					unk_0xAB7639D658BBCCEE(0, 0, 0);
					if (unk_0xF68107C40359970C(iLocal_1050) && !func_50(func_148(), Var4, 0))
					{
						unk_0x642C58F4CA259448(0, Var4, func_128(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x809DFA39515D5981(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						unk_0x2EA72CDBFACD9E92(0, func_128(), 1500, 1, 0);
						if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
						{
							unk_0x6FCE069E4940878C(0, iLocal_1050, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					unk_0xC963A45B50851768(uLocal_1328);
				}
				if (!unk_0x55B23FE400FCEA6B(iLocal_1051[iParam0], 0))
				{
					unk_0x8ACADA903FCAA42F(iLocal_1051[iParam0], uLocal_1328);
				}
				unk_0x7461D7C5BA953BC7(&uLocal_1328);
			}
			iLocal_1045[iParam0] = 4;
			break;
		
		case 4:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1051[iParam0], 0))
			{
				if (unk_0xFCF559C8631ABED7(iLocal_1051[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = unk_0xD01FAFCE275C94F3(iLocal_1051[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0xB5CB6BC7AD4CDCCE(iLocal_1051[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0xB5CB6BC7AD4CDCCE(iLocal_1051[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1316;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1317;
			}
			if (!unk_0xF68107C40359970C(iLocal_1050))
			{
				if (!unk_0xF68107C40359970C(iLocal_1051[iParam0]))
				{
					if (unk_0xD5C6B5E3B93A5EDC(iLocal_1050, 0))
					{
						unk_0xC1A74225341AA9FB(iLocal_1051[iParam0], iLocal_1049, 0, 16);
					}
					else
					{
						unk_0x0B47872E9D74882C(iLocal_1051[iParam0], iLocal_1050, unk_0xE2D3D51028F0428A(), 3f, 1, 0.005f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
				iLocal_1045[iParam0] = 6;
			}
			else if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (unk_0x207D53F9E0190691(iVar0) < 5f)
				{
					func_127(iLocal_1051[iParam0]);
					iLocal_1045[iParam0] = 6;
				}
				else if (unk_0x174CED88B97C78D9(iLocal_1051[iParam0], joaat("script_task_combat")) != 1)
				{
					unk_0xC1A74225341AA9FB(iLocal_1051[iParam0], iLocal_1049, 0, 16);
				}
			}
			else
			{
				func_127(iLocal_1051[iParam0]);
				iLocal_1045[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_1051[iParam0]);
			func_100(iLocal_1051[iParam0]);
			break;
	}
	if (!iLocal_1138)
	{
		if (iLocal_1162)
		{
			if (iLocal_1045[iParam0] != 3 && iLocal_1045[iParam0] != 4)
			{
				iLocal_1045[iParam0] = 3;
			}
		}
		else if (func_137(iLocal_1051[iParam0]))
		{
			iLocal_1138 = 1;
		}
	}
	else if (iLocal_1045[iParam0] < 5)
	{
		if (!unk_0xF68107C40359970C(iLocal_1051[iParam0]))
		{
			if (unk_0xBFF766829E7783C7(iLocal_1051[iParam0]))
			{
				unk_0x41FBE02637A70478(iLocal_1051[iParam0]);
			}
			unk_0x4B16AFBB0C12B630(iLocal_1051[iParam0]);
			unk_0x71B502FC2E129665(iLocal_1051[iParam0], 2);
			unk_0xBC12D08EE7559CCD(iLocal_1051[iParam0], 13, 1);
		}
		iLocal_1045[iParam0] = 5;
	}
}

Vector3 func_148()
{
	struct<3> Var0;
	
	return Var0;
}

int func_149(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6BA8B8E3D0B41C6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (!unk_0x227D9DCE160DDA9D(iParam0))
		{
			bVar0 = true;
			if (unk_0x17FE501894ED2713(iParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x0B69DCF6FE80E8EB(iParam0, 1);
				}
				else
				{
					unk_0xBFD785B1D608BC11(iParam0, 1, iParam8);
				}
				uParam1->f_7 = iParam0;
				unk_0xEEC8A34FF9213FE4(iParam0, iParam2);
				unk_0x7C87F71C68A9AF0B(iParam0, fParam6);
				if (unk_0x12DD4A0B247D9B4D(*uParam1))
				{
					unk_0x7A610B2EC5DA34E7(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x21D1ACE7CE56627C(iParam0, iParam9);
		}
		unk_0x0FB9B56364B11BC9(iParam0, iParam4);
		unk_0x922263C0FEA956C8(iParam0, iParam5);
		*uParam1 = unk_0xC6CEFB49E88BDD9B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xA582EE8380437B1B(*uParam1, iParam8);
				}
				if (!unk_0xACC32B78196FBC2A(sParam7))
				{
					unk_0xB6AD9F9931D821CA("STRING");
					if (bParam10)
					{
						unk_0x76DB21247AE4E4E2(sParam7);
					}
					else
					{
						unk_0x26C23BE14F66F202(sParam7);
					}
					unk_0xA630BF119308F2F4(*uParam1);
				}
				unk_0x7A610B2EC5DA34E7(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
		{
			uParam1->f_1 = unk_0xFEB99716362809A3(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xA582EE8380437B1B(uParam1->f_1, iParam8);
					}
					if (!unk_0xACC32B78196FBC2A(sParam7))
					{
						unk_0xB6AD9F9931D821CA("STRING");
						if (bParam10)
						{
							unk_0x76DB21247AE4E4E2(sParam7);
						}
						else
						{
							unk_0x26C23BE14F66F202(sParam7);
						}
						unk_0xA630BF119308F2F4(uParam1->f_1);
					}
					unk_0x7A610B2EC5DA34E7(uParam1->f_1, 7);
					unk_0xCED9E32812D6C7C7(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x12DD4A0B247D9B4D(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x12DD4A0B247D9B4D(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xB0550BC91B0159D6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		Local_1309 = { unk_0x6B62510F212526DC(iLocal_1050, 0) };
	}
	switch (iLocal_1044)
	{
		case 0:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0) && !unk_0x55B23FE400FCEA6B(uLocal_1054[0], 0))
				{
					if (!unk_0xF6F5D18EF8EAB859(iLocal_1050, iLocal_1316, 0))
					{
						if (unk_0x174CED88B97C78D9(iLocal_1050, joaat("script_task_enter_vehicle")) != 1)
						{
							if (!iLocal_1138 && !iLocal_1162)
							{
								unk_0xB486640392EC50BB(iLocal_1050, iLocal_1316, 30000, 1, 1f, 1, 0);
							}
							else
							{
								unk_0xB486640392EC50BB(iLocal_1050, iLocal_1316, 30000, 1, 2f, 1, 0);
							}
							if (!func_58(&uLocal_1346))
							{
								func_55(&uLocal_1346);
							}
							else
							{
								func_56(&uLocal_1346);
							}
						}
						if (!iLocal_1164)
						{
							if (func_58(&uLocal_1346))
							{
								if (func_52(&uLocal_1346) > 3.5f)
								{
									if (!unk_0xF68107C40359970C(iLocal_1050))
									{
										func_35(&uLocal_1368, 4, iLocal_1050, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1368, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_1164 = 1;
										}
									}
								}
							}
						}
						if (func_153(iLocal_1050))
						{
							func_3();
							iLocal_1044 = 4;
						}
					}
					else
					{
						bLocal_1141 = true;
						iLocal_1044 = 1;
					}
				}
				else
				{
					iLocal_1044 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_1164)
			{
				if (!unk_0xF68107C40359970C(iLocal_1050))
				{
					func_35(&uLocal_1368, 4, iLocal_1050, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1368, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_1164 = 1;
					}
				}
			}
			if (!iLocal_1183)
			{
				if (func_152())
				{
					if (func_30(iLocal_1050, unk_0xE2D3D51028F0428A(), 1) <= 5f && !func_28())
					{
						if (func_36(25f, 1) == 0)
						{
							if (func_151())
							{
								iLocal_1183 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
			{
				if (unk_0xF6F5D18EF8EAB859(iLocal_1050, iLocal_1316, 0))
				{
					if (unk_0x174CED88B97C78D9(iLocal_1050, joaat("script_task_leave_any_vehicle")) != 1)
					{
						unk_0xAB7639D658BBCCEE(iLocal_1050, 0, 256);
					}
				}
				else if (!bLocal_1168)
				{
					unk_0xCAC4D1050F2E6899(iLocal_1050, 2f);
					unk_0x7461D7C5BA953BC7(&uVar0);
					unk_0xA888F8CC04F25CC8(&uVar0);
					unk_0x49D97B076E3590AC(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x7734082B0EDB0BE0(0, iLocal_1049, 200f, -1, 0, 0);
					unk_0xC963A45B50851768(uVar0);
					if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
					{
						unk_0x8ACADA903FCAA42F(iLocal_1050, uVar0);
					}
					unk_0x7461D7C5BA953BC7(&uVar0);
					bLocal_1168 = true;
				}
				else if (unk_0x174CED88B97C78D9(iLocal_1050, joaat("script_task_any")) != 1)
				{
					unk_0x7734082B0EDB0BE0(iLocal_1050, iLocal_1049, 200f, -1, 0, 0);
				}
				if (!iLocal_1183)
				{
					if (!func_28() && !unk_0x559C03F53E6937FC())
					{
						func_6(&uLocal_1368, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1183 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_1138)
	{
		if (iLocal_1162)
		{
		}
		else if (func_137(iLocal_1050) || iLocal_1192)
		{
			iVar1 = func_36(1116471296, 1);
			if (iVar1 != 0)
			{
				func_116(unk_0x6B62510F212526DC(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_115())
			{
				iLocal_1138 = 1;
			}
		}
	}
}

int func_151()
{
	switch (iLocal_1218)
	{
		case 0:
			if (!func_28())
			{
				func_33(&uLocal_1368, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_56(&uLocal_1346);
				iLocal_1218++;
			}
			break;
		
		case 1:
			if (!func_28() && func_52(&uLocal_1346) > 7f)
			{
				func_33(&uLocal_1368, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_56(&uLocal_1346);
				iLocal_1218++;
			}
			break;
		
		case 2:
			if (!func_28() && func_52(&uLocal_1346) > 8f)
			{
				func_33(&uLocal_1368, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iLocal_1316, -1, 0);
		if (iVar0 == 0 || (iVar0 != 0 && unk_0xF68107C40359970C(iVar0)))
		{
			iVar0 = unk_0xAB793EA186AB8DAA(iLocal_1316, 0, 0);
			if (iVar0 == 0 || (iVar0 != 0 && unk_0xF68107C40359970C(iVar0)))
			{
				iVar0 = unk_0xAB793EA186AB8DAA(iLocal_1316, 2, 0);
				if (iVar0 == 0 || (iVar0 != 0 && unk_0xF68107C40359970C(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	var uVar0;
	
	if ((iLocal_1138 || iLocal_1162) || bLocal_1163)
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (func_28())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 0))
			{
				if (!bLocal_1168)
				{
					unk_0x7461D7C5BA953BC7(&uVar0);
					unk_0xA888F8CC04F25CC8(&uVar0);
					unk_0x49D97B076E3590AC(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					unk_0x7734082B0EDB0BE0(0, iLocal_1049, 200f, -1, 0, 0);
					unk_0xC963A45B50851768(uVar0);
					if (!unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
					{
						unk_0x8ACADA903FCAA42F(iLocal_1050, uVar0);
					}
					unk_0x7461D7C5BA953BC7(&uVar0);
					bLocal_1168 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154()
{
	if (!iLocal_1169)
	{
		if (iLocal_1035 > 15)
		{
			unk_0x1CF3F44FC2EB9F99("ASS1_ALERT");
			iLocal_1169 = 1;
		}
	}
	if (!iLocal_1170)
	{
		if (iLocal_1138 && !func_28())
		{
			func_454();
			iLocal_1170 = 1;
			if (!iLocal_1169)
			{
				unk_0x1CF3F44FC2EB9F99("ASS1_ALERT");
				iLocal_1169 = 1;
			}
		}
	}
	func_453();
	switch (iLocal_1035)
	{
		case 3:
			if (func_537())
			{
				iLocal_1035 = 4;
				break;
			}
			func_452();
			func_450();
			break;
		
		case 4:
			if (func_537())
			{
				if (func_536())
				{
					iLocal_1157 = 1;
				}
				bLocal_1146 = true;
			}
			func_449();
			func_448();
			func_447();
			func_446(1);
			func_445();
			func_545(&Local_360, 2);
			iLocal_1035 = 5;
			break;
		
		case 5:
			if (func_444())
			{
				iLocal_1035 = 6;
			}
			break;
		
		case 6:
			func_443();
			func_442();
			if (bLocal_1146)
			{
				if (Global_113386.f_19963.f_5 != 0f)
				{
					func_57(&uLocal_1340, Global_113386.f_19963.f_5);
				}
				iLocal_1213 = func_531();
				if (Global_94618)
				{
					if (iLocal_1213 <= 2)
					{
						iLocal_1213++;
					}
				}
				if (iLocal_1213 == 0)
				{
					func_441();
				}
				else if (iLocal_1213 == 1)
				{
					func_440();
				}
				else if (iLocal_1213 == 2)
				{
					func_436();
				}
			}
			else
			{
				if (!func_58(&uLocal_1340))
				{
					func_55(&uLocal_1340);
					Global_113386.f_19963.f_5 = 0f;
				}
				iLocal_1035 = 7;
			}
			break;
		
		case 7:
			func_430();
			func_415();
			break;
		
		case 8:
			func_381();
			break;
		
		case 9:
			func_430();
			func_380();
			func_289();
			break;
		
		case 10:
			func_380();
			func_285();
			break;
		
		case 11:
			func_271();
			func_270();
			break;
		
		case 12:
			func_269();
			func_270();
			break;
		
		case 13:
			func_265();
			func_270();
			break;
		
		case 15:
			func_263();
			break;
		
		case 16:
			func_260();
			break;
		
		case 17:
			func_254();
			break;
		
		case 18:
			func_155();
			break;
	}
}

void func_155()
{
	unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
	func_156();
}

void func_156()
{
	func_253();
	switch (iLocal_1219)
	{
		case 0:
			if (!iLocal_377)
			{
				if (iLocal_1036 == 1)
				{
					bLocal_375 = true;
					func_252();
				}
				Global_113386.f_19963.f_5 = func_52(&uLocal_1340);
				fLocal_372 = Global_113386.f_19963.f_5;
				func_245();
				iLocal_377 = 1;
				iLocal_1219 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1191)
			{
				unk_0xB6E6F1FBDDE27CF3("FRANKLIN_BIG_01");
				iLocal_1191 = 1;
			}
			if (func_241(&uLocal_388, 1, 0) && unk_0x51B424149BC1C8F0())
			{
				func_240(&uLocal_1545, 0, 0, 0, 1);
				func_239(&uLocal_1545, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_239(&uLocal_1545, "ES_XPAND", 2, 216, 1, 1, 0);
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1219 = 2;
			}
			break;
		
		case 2:
			if (func_209(&uLocal_388, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1189 = true;
			}
			if (!bLocal_1189)
			{
				func_201(&uLocal_1545, 1128792064, 1, 0, 1, 1065353216);
			}
			if (unk_0xF09A4F413B0D30EB(2, 215) || unk_0xF01464D7AF0B7347(2, 200))
			{
				if (!bLocal_1189)
				{
					bLocal_1189 = true;
					func_200(&uLocal_388);
				}
			}
			if (bLocal_1189)
			{
				if (func_209(&uLocal_388, 0, 1065353216, 0, 0, 0))
				{
					func_198(&uLocal_388, 0);
					Global_113386.f_19963++;
					func_197();
					func_161(Local_57);
					func_159(0, 0);
					func_157();
					func_538();
				}
			}
			break;
	}
}

void func_157()
{
	func_158();
}

int func_158()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

void func_159(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((func_46(0) && Global_78565.f_1 == 1) && func_160(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || func_46(0))
	{
		iVar0 = func_45();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 4);
		unk_0xCED9E32812D6C7C7(&Global_78567, true);
		Global_78583 = uVar2;
		Global_78584 = unk_0x320D1840B6DAA1CC();
	}
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_161(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	float fVar0;
	
	fVar0 = (1f + func_196());
	fVar0 = (fVar0 * Param0.f_23);
	if (func_124(Global_113386.f_19963.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_24);
	}
	func_162(func_18(), 97, unk_0xF2DB717A73826179(fVar0), 0, 0);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_195(iParam0) == 3)
	{
		return;
	}
	if (func_195(iParam0) == 4)
	{
		return;
	}
	func_163(func_195(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x61481F9FBB1C7EDD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x076A5661EF5ABEE4(iVar1, iVar0, 1);
	}
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_194();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_193(99, 1);
					func_192(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_192(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_192(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_177(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_174(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_192(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_192(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_192(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_174(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_192(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_192(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_192(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_192(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_192(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_192(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_192(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_192(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_192(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x1307D54181723A6E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_192(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_192(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_192(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_192(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_192(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_192(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_174(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_192(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_192(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_192(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_192(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_192(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_192(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_173(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_193(95, iParam3);
					break;
				
				case 1:
					func_193(97, iParam3);
					break;
				
				case 2:
					func_193(96, iParam3);
					break;
			}
			func_193(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_166(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_166(bVar1);
	}
	iVar5 = (Global_60328[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60328[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60328[iVar2] = 2147483647;
				}
				else
				{
					Global_60328[iVar2] = (Global_60328[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_192(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_192(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_192(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60328[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60328[iVar2];
			Global_60328[iVar2] = (Global_60328[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113386.f_20564.f_233[iVar2 /*69*/]++;
		Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
		if (Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_165(iParam0);
	if (Global_43052 == 15)
	{
		func_164(0);
	}
	return 1;
}

void func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60336[iVar0 /*3*/][0] = Global_113386.f_20564[iVar0];
		Global_60336.f_31[iVar0 /*3*/][0] = Global_113386.f_20564.f_11[iVar0];
		Global_60336.f_62[iVar0 /*3*/][0] = Global_113386.f_20564.f_22[iVar0];
		Global_60336.f_93[iVar0 /*3*/][0] = Global_113386.f_20564.f_33[iVar0];
		Global_60336.f_124[iVar0 /*3*/][0] = Global_113386.f_20564.f_44[iVar0];
		Global_60336.f_155[iVar0 /*3*/][0] = Global_113386.f_20564.f_55[iVar0];
		Global_60336.f_186[iVar0 /*3*/][0] = Global_113386.f_20564.f_66[iVar0];
		Global_60336.f_217[iVar0 /*3*/][0] = Global_113386.f_20564.f_77[iVar0];
		Global_60336.f_248[iVar0 /*3*/][0] = Global_113386.f_20564.f_88[iVar0];
		if (!bParam0)
		{
			Global_60336[iVar0 /*3*/][1] = Global_113386.f_20564[iVar0];
			Global_60336.f_31[iVar0 /*3*/][1] = Global_113386.f_20564.f_11[iVar0];
			Global_60336.f_62[iVar0 /*3*/][1] = Global_113386.f_20564.f_22[iVar0];
			Global_60336.f_93[iVar0 /*3*/][1] = Global_113386.f_20564.f_33[iVar0];
			Global_60336.f_124[iVar0 /*3*/][1] = Global_113386.f_20564.f_44[iVar0];
			Global_60336.f_155[iVar0 /*3*/][1] = Global_113386.f_20564.f_55[iVar0];
			Global_60336.f_186[iVar0 /*3*/][1] = Global_113386.f_20564.f_66[iVar0];
			Global_60336.f_217[iVar0 /*3*/][1] = Global_113386.f_20564.f_77[iVar0];
			Global_60336.f_248[iVar0 /*3*/][1] = Global_113386.f_20564.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_60328[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_166(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_172(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_172(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_172(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_172(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_169(8272, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		func_169(8273, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		func_169(8274, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		func_169(8275, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		func_169(8276, 0, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		func_169(8277, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x9315DBF7D972F07A())
	{
		if (BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar0 = true;
			unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113386.f_20564.f_471, bParam0) || BitTest(Global_2359296[func_168() /*5567*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		unk_0xB0550BC91B0159D6(&(Global_113386.f_20564.f_471), bParam0);
		unk_0xB0550BC91B0159D6(&(Global_2359296[func_168() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x150D8F58B26E9F70("COUP_RED");
		unk_0x26C23BE14F66F202(func_167(bParam0));
		unk_0x3B81B9627E7885CF(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_167(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_170(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

int func_170(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_171();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_171()
{
	return Global_1574918;
}

void func_172(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_171();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, bParam1, iParam2);
}

void func_173(int iParam0)
{
	func_193(93, iParam0);
	func_193(29, iParam0);
	func_193(30, iParam0);
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_176(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_176(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_176(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_176(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x48352343BC5A41AE();
		iVar1 = func_175(8272, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x48352343BC5A41AE();
		iVar3 = func_175(8273, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x48352343BC5A41AE();
		iVar5 = func_175(8274, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x48352343BC5A41AE();
		iVar7 = func_175(8275, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x48352343BC5A41AE();
		iVar9 = func_175(8276, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x48352343BC5A41AE();
		iVar11 = func_175(8277, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		return BitTest(Global_113386.f_20564.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_168() /*5567*/].f_681.f_10, iParam0);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_170(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_171();
	}
	return unk_0xDA7EBFC49AE3F1B0(iParam0, iParam1);
}

int func_177(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xDA4421F81DF4B90D(27))
	{
		return 0;
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x61481F9FBB1C7EDD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x61481F9FBB1C7EDD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x076A5661EF5ABEE4(joaat("num_cash_spent"), iVar1, 1);
		func_191(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_178(27, 1);
	return 1;
}

int func_178(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_179(iParam0, iParam1);
}

int func_179(int iParam0, int iParam1)
{
	if (func_24(14) && !func_190(iParam0))
	{
		return 0;
	}
	if (unk_0xDA4421F81DF4B90D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_189(&Global_4541529))
	{
		if (func_187(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_180(&Global_4541529, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB8D77780DF8E1242(iParam0))
		{
			return 0;
		}
		if (unk_0xDA4421F81DF4B90D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_180(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_190(iParam1))
	{
		return 0;
	}
	if (func_187(uParam0, iParam1))
	{
		return 0;
	}
	if (func_186(uParam0) < 0f)
	{
		func_185(uParam0, 0);
	}
	func_183(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_181(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_181(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xDA4421F81DF4B90D(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_190(iParam1))
	{
		return 0;
	}
	if (func_187(uParam0, iParam1))
	{
		return 0;
	}
	if (func_186(uParam0) < 0f)
	{
		func_185(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_182(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_182(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_183(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_184(uParam0, iVar0);
		iVar0++;
	}
	func_185(uParam0, (Global_4541528 - 0.5f));
}

void func_184(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_185(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_186(var uParam0)
{
	return uParam0->f_80;
}

bool func_187(var uParam0, int iParam1)
{
	return func_188(uParam0, iParam1) != -1;
}

int func_188(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_189(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x076A5661EF5ABEE4(iParam0, iVar0, 1);
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58896[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58896[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_194()
{
	int iVar0;
	
	if (unk_0xAF5DBE95205A49D1())
	{
		unk_0x61481F9FBB1C7EDD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_60328[0] == iVar0)
		{
			Global_60328[0] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_60328[1] == iVar0)
		{
			Global_60328[1] = iVar0;
		}
		unk_0x61481F9FBB1C7EDD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_60328[2] == iVar0)
		{
			Global_60328[2] = iVar0;
		}
	}
}

int func_195(int iParam0)
{
	return Global_1998[iParam0 /*29*/].f_17;
}

float func_196()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_124(Global_113386.f_19963.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113386.f_19963.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113386.f_19963.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_113386.f_19963.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113386.f_19963.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113386.f_19963.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_113386.f_19963.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_113386.f_19963.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_113386.f_19963.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_197()
{
	func_545(&(Global_113386.f_19963.f_1), 2048);
}

void func_198(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(false);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78588)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_46(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_199(0);
}

void func_199(int iParam0)
{
	Global_78579 = iParam0;
	Global_78580 = iParam0;
}

void func_200(var uParam0)
{
	if (uParam0->f_565 || uParam0->f_576 <= uParam0->f_562)
	{
		uParam0->f_565 = 0;
		uParam0->f_562 = (uParam0->f_576 - 1);
	}
}

void func_201(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB()) || unk_0xA829C9A2767AC8EF()) || unk_0x6304243969F5A11A())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_208(uParam0))
	{
		return;
	}
	unk_0x33F5772842F16E82();
	unk_0x2E04B7B46A3670E5(iParam2);
	if (!func_207(uParam0->f_1, 256) || (func_207(uParam0->f_1, 8192) && unk_0xB1C1E679BD17A4F0(2)))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_CLEAR_SPACE");
		unk_0xCA5D23E5F0F0306F(fParam1);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_MAX_WIDTH");
		unk_0xCA5D23E5F0F0306F(fParam5);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x6F06CF0E9AB02847();
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(func_207(uParam0->f_1, 4096));
			unk_0x6F06CF0E9AB02847();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x3A76A0944BE2C291(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3A76A0944BE2C291(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x4F47E317C74C543B(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						iVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							uVar3 = unk_0x2018949B2C9FD96A(iVar0, iVar1, iVar2);
						}
						else
						{
							uVar3 = unk_0x19214818F925D149(iVar0, iVar1, iVar2);
						}
						if (!unk_0xACC32B78196FBC2A(uVar3))
						{
							func_206(sVar3);
						}
						bVar7++;
					}
					if (!unk_0xACC32B78196FBC2A(uParam0->f_2[iVar6 /*15*/]))
					{
						func_205(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (func_207(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD7D6BA6E36AEC182(true);
								unk_0x4F47E317C74C543B(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD7D6BA6E36AEC182(false);
								unk_0x4F47E317C74C543B(-1);
							}
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar6++;
		}
		fVar8 = func_204(bParam4, func_204(func_207(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEA5DEA46C3EE64D3(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xCA5D23E5F0F0306F(fVar8);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(0f);
		unk_0xCA5D23E5F0F0306F(80f);
		unk_0x6F06CF0E9AB02847();
		func_203(&(uParam0->f_1), 256);
		func_202(&(uParam0->f_1), 128);
	}
	unk_0xC4353D240DCE9533(*uParam0, 255, 255, 255, 0, 0);
}

void func_202(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_204(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_205(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_206(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_207(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_208(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			func_203(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_209(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x8142A6539DDC180F() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0x8142A6539DDC180F();
	if (!unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE63474311C6E3825(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 1))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x1C7F03843C4541AD(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x94B5910A9C945688(1);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
			{
				unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
	}
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(19);
	unk_0x7653D561C9574763(2, 19, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 21, 1);
	unk_0x7653D561C9574763(0, 28, 1);
	unk_0x7653D561C9574763(0, 29, 1);
	unk_0x7653D561C9574763(0, 171, 1);
	func_234(0);
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0x87694B2FAA0FC0C7() || (unk_0xA829C9A2767AC8EF() && !unk_0xECD40FEF3CF43BDB()))
		{
			unk_0x60236500251FDE8E();
		}
	}
	Global_43602 = 1;
	if (!uParam0->f_567)
	{
		switch (func_21(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			case 1:
				unk_0x9DCF157443EA30D6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9DCF157443EA30D6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9DCF157443EA30D6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + unk_0xF34EE736CF047844((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_233(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_233(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_233((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_233(30f) - func_233(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_199(1);
		uParam0->f_576 = (uParam0->f_576 + unk_0xF2DB717A73826179((0f + (1000f * unk_0x0000000050597EE2()))));
		func_212(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_30 = func_211(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * unk_0x0000000050597EE2())));
			}
		}
		uParam0->f_547 = func_211(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_OUT");
			unk_0x6F06CF0E9AB02847();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * unk_0x0000000050597EE2())));
				}
			}
		}
		uParam0->f_548 = func_211(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0xB1C1E679BD17A4F0(2))
			{
				if (unk_0x0347CCBD719C8ADC(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_210(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xF09A4F413B0D30EB(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0x0347CCBD719C8ADC(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_210(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_563 = func_211((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * unk_0x0000000050597EE2())), 0f, 1f);
				uParam0->f_577 = func_211((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_211((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * unk_0x0000000050597EE2())), 0f, 1f);
			uParam0->f_577 = func_211((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0xF09A4F413B0D30EB(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			if (!bVar0)
			{
				func_199(0);
			}
			return !bVar0;
		}
	}
	func_199(0);
	return 1;
}

void func_210(var uParam0, bool bParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_206(unk_0x2018949B2C9FD96A(2, 215, 1));
	func_205("ES_HELP");
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x4F47E317C74C543B(215);
	}
	unk_0x6F06CF0E9AB02847();
	if (bParam1)
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x4F47E317C74C543B(1);
		func_206(unk_0x2018949B2C9FD96A(2, 216, 1));
		func_205("ES_XPAND");
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xD7D6BA6E36AEC182(true);
			unk_0x4F47E317C74C543B(216);
		}
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

float func_211(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_212(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = unk_0xF2DB717A73826179((uParam0->f_547 * 255f));
	fVar1 = (func_232() * 0.25f);
	if (unk_0x0347CCBD719C8ADC(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_205(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_231(&(uParam0->f_13));
				}
				else
				{
					func_205(&(uParam0->f_13));
				}
				if (unk_0x9315DBF7D972F07A())
				{
					unk_0x4F47E317C74C543B(150);
				}
				else
				{
					unk_0x4F47E317C74C543B(100);
				}
				unk_0xD7D6BA6E36AEC182(true);
				if (uParam0->f_560 == 4)
				{
					unk_0x4F47E317C74C543B((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x4F47E317C74C543B(uParam0->f_56);
				}
				unk_0xD7D6BA6E36AEC182(iParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0x4F47E317C74C543B(2);
				}
				else
				{
					unk_0x4F47E317C74C543B(69);
				}
				unk_0x6F06CF0E9AB02847();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_UP");
				unk_0xCA5D23E5F0F0306F(0.15f);
				unk_0xD7D6BA6E36AEC182(true);
				unk_0x6F06CF0E9AB02847();
				uParam0->f_3 = 1;
			}
		}
		func_230();
		unk_0xC4353D240DCE9533(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.1388889f + func_233((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_232());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_229(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xF4CC509EEB975296(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
		{
			fVar7 = func_228(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_229(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_232()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x07899AAA5D680386(2, 215);
	unk_0x07899AAA5D680386(2, 216);
	unk_0x07899AAA5D680386(2, 200);
	unk_0x7653D561C9574763(2, 200, 1);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_94((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * unk_0x0000000050597EE2())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0xA829C9A2767AC8EF())
			{
				unk_0x33F5772842F16E82();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0xC4353D240DCE9533(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				unk_0x7653D561C9574763(2, 188, 1);
				if (unk_0xF01464D7AF0B7347(2, 188))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 187, 1);
				if (unk_0xF01464D7AF0B7347(2, 187))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 202, 1);
				if (unk_0xF01464D7AF0B7347(2, 202))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				if (unk_0xF09A4F413B0D30EB(2, 215) || unk_0xF01464D7AF0B7347(2, 200))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x2F046C9381D8E91B(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, iVar0);
	unk_0xE835F806BE49C67B(fVar9, fVar10);
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, 0.4f);
	fVar1 = (fVar1 - func_233(6f));
	fVar1 = (fVar1 + (func_233(30f) - func_233((2f * 2f))));
	fVar11 = (fVar2 - func_233((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_211((fVar11 / (0.6f * func_233(25f))), 0f, 1f);
		func_230();
		unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 - (func_233((2f - 0.5f)) - 0.001388889f)), fVar6, func_227(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_233((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_233((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_232())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_211((fVar11 / (0.8f * func_233(25f))), 0f, 1f);
			func_224(uParam0, iVar17, (fVar1 + func_233(2f)), fVar9, fVar10, unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_233(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_233((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_232())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_233(2f));
					fVar12 = func_211((fVar11 / (0.6f * func_233(25f))), 0f, 1f);
					func_230();
					unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_233((2f * 0.5f))), fVar6, func_227(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_233((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_233((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_233((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_232())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_233(2f));
			fVar12 = func_211((fVar11 / (0.6f * func_233(25f))), 0f, 1f);
			func_230();
			unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_233((2f * 0.5f))), fVar6, func_227(1f), uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_233((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_232())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_211((fVar11 / (0.8f * func_233(25f))), 0f, 1f);
			unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			func_216(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xE2F2D76A4AA269FF() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_232()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_232()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_232()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_232()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0xE835F806BE49C67B(fVar20, fVar21);
				unk_0xB8306DA8A5D18C52(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xB8306DA8A5D18C52(0);
			}
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			if (unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
			{
				func_215(&(uParam0->f_550), fVar20, (fVar1 + func_233((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_214(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_233((2f * 2f))), 0, 0);
			}
			unk_0xE835F806BE49C67B(fVar20, fVar21);
			unk_0xB8306DA8A5D18C52(2);
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			unk_0x21FC15AE6B6188C4(0);
			func_230();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xE835F806BE49C67B(fVar20, fVar22);
			unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0xCDDA0C58B818F6B2("PERCENTAGE");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_233((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x2AE954BA77A66307(uParam0->f_559);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_233((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xCDDA0C58B818F6B2("MTPHPER_XPNO");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_233((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xCDDA0C58B818F6B2("ESDOLLA");
					unk_0x3788872A07BA04B3(uParam0->f_558, 1);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_233((2f * 2f))), 0);
					break;
			}
			unk_0xA9911C122B3210B5(&cVar23, 0);
			if (uParam0->f_561 != 0 && unk_0x9D4AFED2949F7082(&cVar23))
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0x2F046C9381D8E91B(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						unk_0x2F046C9381D8E91B(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						unk_0x2F046C9381D8E91B(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_213(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_233(10f)) + fVar39);
				if (uParam0->f_560 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				unk_0xEBF08DA37D86CD05(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, unk_0xF2DB717A73826179((fVar12 * IntToFloat(iVar0))), 0, 0);
			}
			fVar1 = (fVar1 + (func_233(30f) - 2f));
		}
	}
}

float func_213(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_214(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam4);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_230();
	unk_0xCDDA0C58B818F6B2(sParam0);
	unk_0x76DB21247AE4E4E2(sParam1);
	unk_0x1A53079994915FA6(fParam2, fParam3, 0);
}

void func_215(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam3);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_230();
	if (bParam4)
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(sParam0);
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(sParam0);
	}
	unk_0x1A53079994915FA6(fParam1, fParam2, 0);
}

int func_216(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_223(iParam0), 64);
	StringCopy(&cVar16, func_220(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_218(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { unk_0x7DF13542ADA68880(&cVar0, &cVar16) };
		fVar38 = (func_217(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_23150.f_7420[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_218(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0xBE74EC1CD33D16EA(uParam1, uParam2);
		return;
	}
	unk_0x604161EB05F29E6D(uParam1, uParam2);
	fVar0 = unk_0xBBDA792448DB5A89(*uParam1);
	fVar1 = unk_0xBBDA792448DB5A89(*uParam2);
	fVar2 = unk_0xF4CC509EEB975296(0);
	if (func_219(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = unk_0xF2DB717A73826179((fVar1 * fVar2));
		*uParam2 = unk_0xF2DB717A73826179(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = unk_0xF2DB717A73826179((fVar0 / *fParam3));
	*uParam2 = unk_0xF2DB717A73826179((fVar1 / *fParam3));
}

bool func_219(int iParam0, int iParam1)
{
	return (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1)) > 3.5f;
}

var func_220(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_222(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var19, &uVar3))
			{
				return func_221(&uVar3);
			}
		}
		else
		{
			return func_221(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_221(var uParam0)
{
	return uParam0;
}

struct<13> func_222(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

char* func_223(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_222(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var16, &uVar0);
			return func_221(&uVar0);
		}
		else
		{
			return func_221(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_224(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x2F046C9381D8E91B(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x71F4002CB1A0B451(uVar0, uVar1, uVar2, iParam5);
	unk_0xE835F806BE49C67B(fParam3, fParam4);
	unk_0xB8306DA8A5D18C52(1);
	unk_0x3F03C2D4EFA888BC(1f, func_226(14f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_230();
	if (uParam0->f_531[iParam1])
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x2AE954BA77A66307(uParam0->f_489[iParam1]);
		}
	}
	unk_0x1A53079994915FA6(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_216(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_220(7, 0), (fParam4 - 0.006f), ((fParam2 + func_233(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_216(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_220(5, 0), (fParam4 - 0.006f), ((fParam2 + func_233(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_216(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_220(6, 0), (fParam4 - 0.006f), ((fParam2 + func_233(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xB8306DA8A5D18C52(1);
	}
	else
	{
		unk_0xB8306DA8A5D18C52(2);
	}
	unk_0x3F03C2D4EFA888BC(1f, func_226(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x71F4002CB1A0B451(uVar0, uVar1, uVar2, iParam5);
	func_225(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_225(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_230();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_226(18f));
			unk_0xF68E5437AF17EFBC(4);
			if (iParam0 < 0)
			{
				unk_0x27ED46EA48C0A455("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			else
			{
				unk_0x27ED46EA48C0A455("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_226(14f));
			break;
	}
	unk_0x138506D6C7564EF1(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xCDDA0C58B818F6B2("PERCENTAGE");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 1:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 2:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_226(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xCDDA0C58B818F6B2("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
			}
			else
			{
				unk_0xCDDA0C58B818F6B2("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
		
		case 7:
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x76DB21247AE4E4E2(sParam4);
			break;
		
		case 8:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 14);
			break;
		
		case 9:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 6);
			break;
		
		case 10:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 18:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 12:
			unk_0xCDDA0C58B818F6B2("AHD_DIST");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 13:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 16:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 20:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x1A53079994915FA6((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_226(14f));
		}
		else
		{
			unk_0x1A53079994915FA6(fParam2, fParam3, 0);
		}
	}
}

float func_226(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_227(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_228(char* sParam0, char* sParam1)
{
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x76DB21247AE4E4E2(uParam1);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

float func_229(char* sParam0)
{
	unk_0x27ED46EA48C0A455(sParam0);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

void func_230()
{
	unk_0x2E04B7B46A3670E5(1);
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xA829C9A2767AC8EF())
	{
		unk_0x2E04B7B46A3670E5(7);
	}
	unk_0xE53134ABB42F336F(0);
}

void func_231(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

float func_232()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8FE9914D4872D601())
	{
	}
	return fVar0;
}

float func_233(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_234(int iParam0)
{
	if (func_238())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_80(0))
		{
			func_235(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_8137, 2);
	}
}

void func_235(int iParam0)
{
	if (func_238())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_237())
		{
			func_236(1, 1);
		}
		else
		{
			func_236(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_8137, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 30);
	}
	if (!func_15())
	{
		Global_20266.f_1 = 3;
	}
}

void func_236(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			unk_0x31636F0193379566(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_20203);
		}
		else
		{
			unk_0x31636F0193379566(Global_20194);
		}
	}
}

bool func_237()
{
	return BitTest(Global_1958711, 5);
}

bool func_238()
{
	return BitTest(Global_1958711, 19);
}

int func_239(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(uParam0->f_2[iVar1 /*15*/].f_13), false);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_240(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xD9EA500ADEAC231A("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_203(&(uParam0->f_1), 32);
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		func_203(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xD6D689B76F32F4AA(*uParam0, 1);
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (bParam3)
		{
			func_203(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_203(&(uParam0->f_1), 8192);
	}
}

int func_241(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_244(uParam0);
	func_243(uParam0);
	if (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xA9911C122B3210B5("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xA9911C122B3210B5("CommonMenu", 0);
		unk_0xA9911C122B3210B5("MPLeaderboard", 0);
		unk_0xA9911C122B3210B5("MPHud", 0);
		uParam0->f_1 = unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xD9EA500ADEAC231A("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
	}
	else
	{
		if (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_242(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_210(uParam0, 1);
		}
		else
		{
			func_210(uParam0, 0);
		}
	}
	Global_78580 = 1;
	return 1;
}

void func_242(var uParam0)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(true);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(2);
	func_206(unk_0x2018949B2C9FD96A(2, 188, 1));
	func_205("ES_HELP_TU");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(1);
	func_206(unk_0x2018949B2C9FD96A(2, 187, 1));
	func_205("ES_HELP_TD");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_206(unk_0x2018949B2C9FD96A(2, 202, 1));
	func_205("ES_HELP_AB");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

void func_243(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, func_226(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x27ED46EA48C0A455("STRING");
			unk_0x76DB21247AE4E4E2(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
		else
		{
			unk_0x27ED46EA48C0A455(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
	}
	else
	{
		unk_0x27ED46EA48C0A455("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x2AE954BA77A66307(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x26C23BE14F66F202(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x76DB21247AE4E4E2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x63F498818B4DEE3E(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_244(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_245()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		func_251(&uLocal_388, &Local_969, &Global_63169, 0);
		fLocal_372 = (fLocal_372 * 1000f);
		if (Global_94618)
		{
			func_250(&uLocal_388, 6, &(Local_969.f_12), "MTPHPERSKI", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			func_250(&uLocal_388, 6, &(Local_969.f_24), "MTPHPERSKI", 0, 0, 3, 0);
			func_250(&uLocal_388, 6, &(Local_969.f_30), "MTPHPERSKI", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 3, 0);
			func_249();
		}
		else
		{
			if (bLocal_376)
			{
				func_250(&uLocal_388, 6, &(Local_969.f_12), "MTPHPERRET", unk_0xF34EE736CF047844(fLocal_372), 0, 3, 0);
			}
			else
			{
				func_250(&uLocal_388, 9, &(Local_969.f_12), "", unk_0xF34EE736CF047844(fLocal_372), 0, 0, 0);
			}
			if (!unk_0xACC32B78196FBC2A(&(Local_969.f_18)))
			{
				if (bLocal_375)
				{
					func_250(&uLocal_388, 6, &(Local_969.f_24), "", 0, 0, 2, 0);
					func_250(&uLocal_388, 3, &(Local_969.f_30), "", unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 0, 2, 0);
				}
				else
				{
					func_250(&uLocal_388, 6, &(Local_969.f_24), "", 0, 0, 1, 0);
					func_250(&uLocal_388, 3, &(Local_969.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
				}
			}
			else
			{
				func_250(&uLocal_388, 3, &(Local_969.f_30), "", unk_0xF2DB717A73826179(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_94618)
		{
			iVar1 = 0;
			while (iVar1 < Global_75249)
			{
				if (Global_75250[iVar1 /*9*/] >= 0 && !Global_63379[Global_75250[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_75250[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_248(&uLocal_388, 1, &(Local_969.f_48), iLocal_383, 0, 0, 1, 0);
		}
		else if (bLocal_375)
		{
			if (bLocal_376)
			{
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_248(&uLocal_388, 1, &(Local_969.f_42), iLocal_383, 0, 0, 2, 0);
			}
			else
			{
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_248(&uLocal_388, 1, &(Local_969.f_36), iLocal_383, 0, 0, 3, 0);
			}
		}
		else if (!bLocal_375 && !bLocal_376)
		{
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_248(&uLocal_388, 1, &(Local_969.f_42), iLocal_383, 0, 0, 2, 0);
		}
		else
		{
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_248(&uLocal_388, 1, &(Local_969.f_48), iLocal_383, 0, 0, 1, 0);
		}
		func_246();
		iLocal_377 = 1;
	}
}

void func_246()
{
	if (unk_0xB4C854DD86E40FDA(joaat("assassin_valet")) == 1)
	{
		func_247(38, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_247(39, 1, 1);
		}
		else
		{
			func_247(39, 0, 1);
		}
		if (bLocal_375)
		{
			func_247(40, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_247(40, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_247(41, iLocal_383, 1);
		func_247(42, iLocal_384, 1);
	}
	else if (unk_0xB4C854DD86E40FDA(joaat("assassin_multi")) == 1)
	{
		func_247(52, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_247(53, 1, 1);
		}
		else
		{
			func_247(53, 0, 1);
		}
		if (bLocal_375)
		{
			func_247(56, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_247(56, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_247(54, iLocal_383, 1);
		func_247(55, iLocal_384, 1);
	}
	else if (unk_0xB4C854DD86E40FDA(joaat("assassin_hooker")) == 1)
	{
		func_247(66, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_247(67, 1, 1);
		}
		else
		{
			func_247(67, 0, 1);
		}
		if (bLocal_375)
		{
			func_247(68, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_247(68, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_247(69, iLocal_383, 1);
		func_247(70, iLocal_384, 1);
	}
	else if (unk_0xB4C854DD86E40FDA(joaat("assassin_bus")) == 1)
	{
		func_247(81, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_247(82, 1, 1);
		}
		else
		{
			func_247(82, 0, 1);
		}
		if (bLocal_375)
		{
			func_247(83, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_247(83, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_247(84, iLocal_383, 1);
		func_247(85, iLocal_384, 1);
	}
	else if (unk_0xB4C854DD86E40FDA(joaat("assassin_construction")) == 1)
	{
		func_247(97, unk_0xF34EE736CF047844(fLocal_372), 1);
		if (bLocal_375)
		{
			func_247(98, 1, 1);
		}
		else
		{
			func_247(98, 0, 1);
		}
		if (bLocal_375)
		{
			func_247(99, unk_0xF2DB717A73826179((fLocal_374 + fLocal_373)), 1);
		}
		else
		{
			func_247(99, unk_0xF2DB717A73826179(fLocal_373), 1);
		}
		func_247(100, iLocal_383, 1);
		func_247(101, iLocal_384, 1);
	}
}

void func_247(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75250[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75250[iVar0 /*9*/].f_1 = (Global_75250[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75250[iVar0 /*9*/] != -1)
	{
		if (Global_63379[Global_75250[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75250[iVar0 /*9*/].f_1 > 1)
			{
				Global_75250[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75250[iVar0 /*9*/].f_1 < 0)
			{
				Global_75250[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

void func_249()
{
	Global_94617 = 0;
	Global_94618 = 0;
}

void func_250(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_251(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_252()
{
	func_545(&(Global_113386.f_19963.f_1), 4194304);
}

void func_253()
{
	int iVar0;
	
	if (!bLocal_1179)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0x55B23FE400FCEA6B(iVar0, 0))
				{
					if (unk_0xA11C4A6609CA663A(iVar0))
					{
						if (unk_0x63B063064DC08617("ASS1_LOST"))
						{
							bLocal_1179 = true;
						}
					}
				}
			}
		}
	}
}

void func_254()
{
	float fVar0;
	
	if (!iLocal_1176)
	{
		if (!unk_0x559C03F53E6937FC())
		{
			if (!func_28())
			{
				func_259("ASS_VA_GO", 7500, -1);
				iLocal_1176 = 1;
			}
		}
	}
	func_258(&iLocal_1188, &uLocal_1368, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1197)
	{
		case 0:
			iLocal_1197++;
			break;
		
		case 1:
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				fVar0 = func_32(unk_0xE2D3D51028F0428A(), Local_1303, 1);
				if (fVar0 > 155f && func_36(1116471296, 1) == 0)
				{
					bLocal_1171 = true;
					func_256();
					iLocal_1197++;
				}
				else
				{
					unk_0xABB7D34A8925C872(unk_0x9E2D6C50374FCFA9());
				}
			}
			break;
		
		case 2:
			if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (func_36(1116471296, 1) == 0)
				{
					func_253();
					if (func_255())
					{
						iLocal_1035 = 18;
					}
				}
			}
			else if (!iLocal_1187)
			{
				if (!func_28())
				{
					if (!unk_0x559C03F53E6937FC())
					{
						func_259("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1197++;
						iLocal_1187 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				iLocal_1197 = 2;
			}
			break;
	}
}

int func_255()
{
	if (bLocal_1179)
	{
		unk_0x1CF3F44FC2EB9F99("ASS1_LOST");
		iLocal_1180 = 1;
	}
	func_256();
	return 1;
}

void func_256()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1051[iVar0]))
		{
			if (!unk_0xF68107C40359970C(iLocal_1051[iVar0]))
			{
				func_257(&(Local_1106[iVar0 /*8*/]));
				unk_0x03A927199A2DFE46(iLocal_1051[iVar0]);
				unk_0xB3822DB3D538C8F3(&(iLocal_1051[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		if (!unk_0xF68107C40359970C(iLocal_1050))
		{
			unk_0x03A927199A2DFE46(iLocal_1050);
			unk_0xB3822DB3D538C8F3(&iLocal_1050);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1054[iVar0]))
		{
			if (!unk_0xF68107C40359970C(uLocal_1054[iVar0]))
			{
				func_257(&(Local_1064[iVar0 /*8*/]));
				unk_0x03A927199A2DFE46(uLocal_1054[iVar0]);
				unk_0xB3822DB3D538C8F3(&(uLocal_1054[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xE5965CDF24F93A9F(uLocal_1058[iVar0]))
		{
			if (!unk_0xF68107C40359970C(uLocal_1058[iVar0]))
			{
				func_257(&(Local_1089[iVar0 /*8*/]));
				unk_0x03A927199A2DFE46(uLocal_1058[iVar0]);
				unk_0xB3822DB3D538C8F3(&(uLocal_1058[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0xF1A23B343DFEDFD0(iLocal_1329);
}

void func_257(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
		bVar0 = true;
	}
	if (unk_0x12DD4A0B247D9B4D(uParam0->f_1))
	{
		unk_0xFFD8EB5462B07B59(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xE5965CDF24F93A9F(uParam0->f_7))
	{
		if (!unk_0x55B23FE400FCEA6B(uParam0->f_7, 0))
		{
			if (unk_0x227D9DCE160DDA9D(uParam0->f_7))
			{
				unk_0x0B69DCF6FE80E8EB(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_258(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_259(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x38BD019DECCC5482(sParam0);
	unk_0x23D3EE043DE19C4B(iParam1, 1);
}

void func_260()
{
	func_258(&iLocal_1188, &uLocal_1368, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1197)
	{
		case 0:
			if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (!iLocal_1187)
				{
					if (!func_28())
					{
						if (!unk_0x559C03F53E6937FC())
						{
							func_259("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1197++;
							iLocal_1187 = 1;
						}
					}
				}
			}
			else if (func_36(1116471296, 1) != 0)
			{
				if (!iLocal_1176)
				{
					if (!func_28())
					{
						if (!unk_0x559C03F53E6937FC())
						{
							func_259("ASS_VA_GO", 7500, -1);
							iLocal_1197++;
							iLocal_1176 = 1;
						}
					}
				}
			}
			else if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0) && func_36(125f, 1) == 0)
			{
				iLocal_1197++;
			}
			break;
		
		case 1:
			if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0) && func_36(125f, 1) == 0)
			{
				func_253();
				func_256();
				func_262(1);
				func_261();
				iLocal_1197++;
			}
			break;
		
		case 2:
			func_253();
			iLocal_1035 = 18;
			break;
	}
}

void func_261()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1316))
	{
		if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
		{
			unk_0x3B2646B62E7BBE11(iLocal_1316, 1);
		}
		unk_0x3D81769BEC61BFF8(&iLocal_1316);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1317))
	{
		if (!unk_0x55B23FE400FCEA6B(iLocal_1317, 0))
		{
			if ((unk_0xBC7D3EDF3455BC35(iLocal_1317) && !unk_0x4D21C9FB671ED18F(iLocal_1317)) && !unk_0xA829C9A2767AC8EF())
			{
				unk_0x3D81769BEC61BFF8(&iLocal_1317);
			}
			else
			{
				if (unk_0xE5965CDF24F93A9F(uLocal_1058[0]) && !unk_0x55B23FE400FCEA6B(uLocal_1058[0], 0))
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_1317, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(uLocal_1058[0], iLocal_1317, 0))
						{
							unk_0x51BB443B279E4104(uLocal_1058[0]);
						}
					}
				}
				if (unk_0xE5965CDF24F93A9F(uLocal_1058[1]) && !unk_0x55B23FE400FCEA6B(uLocal_1058[1], 0))
				{
					if (!unk_0x55B23FE400FCEA6B(iLocal_1317, 0))
					{
						if (unk_0xF6F5D18EF8EAB859(uLocal_1058[1], iLocal_1317, 0))
						{
							unk_0x51BB443B279E4104(uLocal_1058[1]);
						}
					}
				}
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iLocal_1317, 0))
					{
						unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
					}
				}
				unk_0x3D81769BEC61BFF8(&iLocal_1317);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_1320[0]))
	{
		unk_0x3D81769BEC61BFF8(&(uLocal_1320[0]));
	}
	if (unk_0xE5965CDF24F93A9F(uLocal_1320[1]))
	{
		unk_0x3D81769BEC61BFF8(&(uLocal_1320[1]));
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1323) && !unk_0x55B23FE400FCEA6B(iLocal_1323, 0))
	{
		if (unk_0xA6A089369417736E(iLocal_1323) && unk_0x930E64CB0285CAEC(iLocal_1323, 1))
		{
			unk_0x3D81769BEC61BFF8(&iLocal_1323);
		}
	}
}

void func_262(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_1124))
		{
			unk_0xFFD8EB5462B07B59(&uLocal_1124);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_1125[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_1125[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_1129[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_1129[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x12DD4A0B247D9B4D(uLocal_1129[iVar0]))
		{
			unk_0xFFD8EB5462B07B59(&(uLocal_1129[iVar0]));
		}
		iVar0++;
	}
}

void func_263()
{
	if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), Local_1297, Local_1300, fLocal_1247, 1, 0, 0))
	{
		bLocal_1156 = true;
	}
	else
	{
		bLocal_1156 = false;
	}
	if (unk_0x12DD4A0B247D9B4D(uLocal_1124))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_1124);
	}
	unk_0x8576657A629C4B0A(0.5f);
	if (bLocal_1156)
	{
		func_264();
		iLocal_1035 = 17;
	}
	else
	{
		func_264();
		iLocal_1035 = 16;
	}
	func_92(&uLocal_1533, 0, 0);
}

void func_264()
{
	iLocal_1197 = 0;
}

void func_265()
{
	if (!bLocal_1153)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1316))
		{
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				unk_0x3B2646B62E7BBE11(iLocal_1316, 3);
				if (func_267(iLocal_1316, 5f))
				{
					bLocal_1153 = true;
				}
			}
		}
	}
	if (!iLocal_1150)
	{
		if (func_266(iLocal_1316, 10000))
		{
			iLocal_1150 = 1;
		}
	}
}

int func_266(int iParam0, int iParam1)
{
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		if (((unk_0xF798DCF92C74B531(iParam0, 0, iParam1) || unk_0xF798DCF92C74B531(iParam0, 2, iParam1)) || unk_0xF798DCF92C74B531(iParam0, 3, iParam1)) || unk_0xF798DCF92C74B531(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0, float fParam1)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (func_268(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_268(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam4);
}

void func_269()
{
	switch (iLocal_1197)
	{
		case 0:
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				if (func_140())
				{
					if (!unk_0xF68107C40359970C(uLocal_1054[0]))
					{
						if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
						{
							if (unk_0xF6F5D18EF8EAB859(uLocal_1054[0], iLocal_1316, 0))
							{
								bLocal_1149 = true;
								func_264();
								iLocal_1035 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_270()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1050))
	{
		if (unk_0xF68107C40359970C(iLocal_1050))
		{
			if (unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
			{
				bLocal_1154 = true;
				if (unk_0x12DD4A0B247D9B4D(uLocal_1124))
				{
					unk_0xFFD8EB5462B07B59(&uLocal_1124);
				}
				func_116(Local_1309, 1097859072, 1116471296);
			}
			unk_0x2DA9F9D8E5530E75(3f, 1073741824, 3);
			func_264();
			iLocal_1035 = 15;
		}
	}
}

void func_271()
{
	func_262(0);
	func_278();
	func_276();
	func_273();
	func_272();
	func_259("ASS_VA_KILL", 7500, -1);
	unk_0xC1B1E9A034A63A62(0);
	bLocal_1165 = true;
	func_264();
	iLocal_1035 = 12;
}

void func_272()
{
	unk_0xF1A23B343DFEDFD0(iLocal_1331);
	unk_0xF1A23B343DFEDFD0(iLocal_1332);
}

void func_273()
{
	func_275(&(Local_1695.f_4));
	func_274(&(Local_1695[0]));
	func_274(&(Local_1695[1]));
	func_274(&(Local_1695.f_8[0]));
	func_274(&(Local_1695.f_8[1]));
	func_274(&(Local_1695.f_5[0]));
	func_274(&(Local_1695.f_5[1]));
	func_274(&(Local_1695.f_3));
}

void func_274(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x4D21C9FB671ED18F(*uParam0))
		{
			unk_0x05CB75C0837196F9(uParam0);
		}
		else
		{
			unk_0xB3822DB3D538C8F3(uParam0);
		}
	}
}

void func_275(var uParam0)
{
	if (unk_0xE5965CDF24F93A9F(*uParam0))
	{
		if (unk_0x4D21C9FB671ED18F(*uParam0))
		{
			unk_0x3D81769BEC61BFF8(uParam0);
		}
	}
}

void func_276()
{
	struct<3> Var0[2];
	struct<3> Var7;
	float fVar10;
	int iVar11;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_1050) && !unk_0x55B23FE400FCEA6B(iLocal_1050, 0))
	{
		Var7 = { unk_0x6B62510F212526DC(iLocal_1050, 1) };
		fVar10 = unk_0x82FE2343F8BDFF0B(iLocal_1050);
	}
	Var0[0 /*3*/] = { unk_0x6DB7FBD602C51670(Var7, fVar10, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { unk_0x6DB7FBD602C51670(Var7, fVar10, -1f, -1f, 0f) };
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (iVar11 == 0)
		{
			iLocal_1051[iVar11] = unk_0xA8D58C3AADA2C41C(26, iLocal_1331, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1243[iLocal_1206], 1, 1);
		}
		else
		{
			iLocal_1051[iVar11] = unk_0xA8D58C3AADA2C41C(26, iLocal_1332, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1243[iLocal_1206], 1, 1);
		}
		unk_0x006574E87E6F1942(iLocal_1051[iVar11], 1, 1);
		unk_0xDCB52C614B3660EC(iLocal_1051[iVar11]);
		unk_0xBC12D08EE7559CCD(iLocal_1051[iVar11], 3, 0);
		unk_0xBC12D08EE7559CCD(iLocal_1051[iVar11], 23, 1);
		unk_0xBC12D08EE7559CCD(iLocal_1051[iVar11], 30, 0);
		unk_0xBC12D08EE7559CCD(iLocal_1051[iVar11], 13, 1);
		unk_0x7DCB4594ACF18DA7(iLocal_1051[iVar11], 2);
		unk_0xABC2CA6F28903308(iLocal_1051[iVar11], 1);
		func_277(iLocal_1051[iVar11], 1);
		unk_0x5D204586F4633D2E(iLocal_1051[iVar11], 1);
		iVar11++;
	}
}

void func_277(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_1050)
	{
		unk_0x9521FB98DB6DDF50(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		unk_0x71B502FC2E129665(iParam0, 1);
		unk_0xBC12D08EE7559CCD(iParam0, 0, 1);
	}
	else
	{
		unk_0x71B502FC2E129665(iParam0, 2);
		unk_0xBC12D08EE7559CCD(iParam0, 13, 1);
	}
	unk_0x348A212511C78DBF(iParam0, 60);
	unk_0x395228F7A14C6543(iParam0, 2);
	unk_0x50274A7EACA3133A(iParam0, 1);
	unk_0x80476B7F23BCBB1B(iParam0, 1);
	unk_0xFF4BEB6CFF55A013(iParam0, iLocal_1336);
}

void func_278()
{
	func_280();
	iLocal_1206 = unk_0x5853B15F78E1A265(0, iLocal_1199);
	iLocal_1050 = unk_0xA8D58C3AADA2C41C(26, iLocal_1329, Local_1262[iLocal_1206 /*3*/], uLocal_1243[iLocal_1206], 1, 1);
	unk_0x006574E87E6F1942(iLocal_1050, 1, 1);
	unk_0xDCB52C614B3660EC(iLocal_1050);
	func_277(iLocal_1050, 1);
	unk_0xF1A23B343DFEDFD0(iLocal_1329);
	if (!unk_0x12DD4A0B247D9B4D(uLocal_1124))
	{
		uLocal_1124 = func_279(iLocal_1050, 0, 0);
	}
	unk_0x293A9399E902A33B(uLocal_1124, 1f);
}

int func_279(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xEFD6451BF0F3352F(iParam0);
	if (unk_0x04D9F44466CBF3CA(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_204(unk_0x9315DBF7D972F07A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD809204F14EF9B68(uVar0, iParam1);
		}
		else
		{
			unk_0xA582EE8380437B1B(uVar0, 2);
		}
	}
	else if (unk_0x9044EDB8A7BF67B4(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_204(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
		unk_0xD809204F14EF9B68(uVar0, iParam1);
	}
	else if (unk_0x0086095F1731DE17(iParam0))
	{
		unk_0x293A9399E902A33B(uVar0, func_204(unk_0x9315DBF7D972F07A(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_280()
{
	int iVar0;
	
	iLocal_1199 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x0318E2EE6FB4563F(Local_1252[iVar0 /*3*/], 5f) && !func_284(iVar0, 6f))
		{
			Local_1262[iLocal_1199 /*3*/] = { Local_1252[iVar0 /*3*/] };
			uLocal_1243[iLocal_1199] = fLocal_1239[iVar0];
			iLocal_1199++;
		}
		iVar0++;
	}
	if (iLocal_1199 == 0)
	{
		if (func_104())
		{
			Local_1262[0 /*3*/] = { Local_1252[1 /*3*/] };
			uLocal_1243[0] = fLocal_1239[1];
			iLocal_1199++;
		}
		else if (func_283())
		{
			Local_1262[0 /*3*/] = { Local_1252[0 /*3*/] };
			uLocal_1243[0] = fLocal_1239[0];
			iLocal_1199++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_282(Local_1252[iVar0 /*3*/], 1) > 30f && !func_284(iVar0, 6f))
				{
					Local_1262[iLocal_1199 /*3*/] = { Local_1252[iVar0 /*3*/] };
					uLocal_1243[iLocal_1199] = fLocal_1239[iVar0];
					iLocal_1199++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1199 == 0)
	{
		func_281();
	}
}

void func_281()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar4 = unk_0x2A488C176D52CCA5(Var1, Local_1252[iVar0 /*3*/]);
		if (fVar4 > fLocal_1251)
		{
			fLocal_1251 = fVar4;
			iLocal_1250 = iVar0;
		}
		iVar0++;
	}
	Local_1262[0 /*3*/] = { Local_1252[iLocal_1250 /*3*/] };
	uLocal_1243[0] = fLocal_1239[iLocal_1250];
}

float func_282(struct<3> Param0, int iParam3)
{
	return func_32(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), Param0, iParam3);
}

int func_283()
{
	if (func_32(unk_0xE2D3D51028F0428A(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0, float fParam1)
{
	if (unk_0x34FAA537D539192C(Local_1252[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_285()
{
	switch (iLocal_1197)
	{
		case 0:
			if (!iLocal_1166)
			{
				func_112(&Local_360, 4);
				func_288();
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1197++;
			}
			break;
		
		case 1:
			if (((bLocal_1145 && !bLocal_1143) && func_287()) && func_286())
			{
				func_264();
				iLocal_1035 = 11;
			}
			break;
	}
}

int func_286()
{
	int iVar0;
	
	unk_0xD69A0C3662175E68(iLocal_1329);
	if (unk_0x0152AA00FA3130F1(iLocal_1329))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_287()
{
	if (((unk_0xE5965CDF24F93A9F(uLocal_1054[0]) && unk_0xE5965CDF24F93A9F(uLocal_1054[1])) && !unk_0xF68107C40359970C(uLocal_1054[0])) && !unk_0xF68107C40359970C(uLocal_1054[1]))
	{
		if (unk_0xF6F5D18EF8EAB859(uLocal_1054[0], iLocal_1316, 0) && unk_0xF6F5D18EF8EAB859(uLocal_1054[1], iLocal_1316, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_288()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1037[iVar0] = 4;
		iVar0++;
	}
	bLocal_1159 = true;
}

void func_289()
{
	switch (iLocal_1197)
	{
		case 0:
			func_311(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_112(&Local_360, 2);
			if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
			{
				unk_0x371D594409A68A18(iLocal_1316, 0, 1, 0);
			}
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_1323) && !unk_0x55B23FE400FCEA6B(iLocal_1323, 0))
					{
						func_297(iLocal_1323);
					}
				}
			}
			func_294();
			func_293();
			unk_0x1CF3F44FC2EB9F99("ASS1_START");
			unk_0xCED9E32812D6C7C7(&Local_360, 4);
			func_259("ASS_VA_PLANT", 7500, 1);
			iLocal_1197++;
			break;
		
		case 1:
			if (iLocal_1172)
			{
				if (((!func_292(&iLocal_1318) && !func_291(&(iLocal_1324[0]), &bLocal_1193)) && !func_291(&(iLocal_1324[1]), &bLocal_1193)) && !func_291(&(iLocal_1324[2]), &bLocal_1193))
				{
					unk_0xC1B1E9A034A63A62(0);
					func_264();
					iLocal_1035 = 10;
				}
				else
				{
					func_290();
				}
			}
			break;
	}
}

void func_290()
{
	iLocal_1048 = 1;
	bLocal_1143 = true;
}

int func_291(var uParam0, int iParam1)
{
	if (!unk_0xE5965CDF24F93A9F(*uParam0))
	{
		return 0;
	}
	if (!unk_0xE5965CDF24F93A9F(iLocal_1317))
	{
		return 0;
	}
	if (func_30(*uParam0, iLocal_1317, 1) <= 5f)
	{
		iLocal_1318 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_292(var uParam0)
{
	struct<3> Var0;
	
	*uParam0 = unk_0xFE15FEB341652241(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1316) && *uParam0 != iLocal_1317) && *uParam0 != Local_1695.f_4)
	{
		if (unk_0xE5965CDF24F93A9F(*uParam0) && !unk_0x55B23FE400FCEA6B(*uParam0, 0))
		{
			if (unk_0xAB793EA186AB8DAA(*uParam0, -1, 0) == 0)
			{
				Var0 = { unk_0x6B62510F212526DC(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1323 != 0)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_1323) && !unk_0x55B23FE400FCEA6B(iLocal_1323, 0))
		{
			if (!func_99(iLocal_1323))
			{
				Var0 = { unk_0x6B62510F212526DC(iLocal_1323, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_293()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0xE5965CDF24F93A9F(uLocal_1054[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1332;
			}
			else
			{
				iVar0 = iLocal_1331;
			}
			uLocal_1054[iVar1] = unk_0xA8D58C3AADA2C41C(26, iVar0, Local_1272[iVar1 /*3*/], fLocal_1225[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 0, 0, 2, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 3, 0, 0, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 4, 0, 1, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 8, 0, 0, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 0, 1, 2, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 3, 0, 1, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 4, 0, 0, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 8, 0, 0, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 0, 1, 2, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 3, 0, 2, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 4, 0, 1, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 8, 0, 0, 0);
				unk_0xE3752B10DC995E95(uLocal_1054[iVar1], 11, 1, 1, 0);
			}
		}
		if (!unk_0xF68107C40359970C(uLocal_1054[iVar1]))
		{
			unk_0xA7266A50941DBAEA(uLocal_1054[iVar1], 0);
			unk_0xABC2CA6F28903308(uLocal_1054[iVar1], 1);
			unk_0xBC12D08EE7559CCD(uLocal_1054[iVar1], 23, 1);
			unk_0xBC12D08EE7559CCD(uLocal_1054[iVar1], 30, 0);
			unk_0x7DCB4594ACF18DA7(uLocal_1054[iVar1], 2);
			unk_0xD6A76BAB45A4B460(uLocal_1054[iVar1], 104, 1);
			func_277(uLocal_1054[iVar1], 1);
		}
		iVar1++;
	}
}

void func_294()
{
	func_296();
	func_295();
	unk_0xF1A23B343DFEDFD0(iLocal_1333);
}

void func_295()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xE5965CDF24F93A9F(uLocal_1058[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_1058[iVar0] = unk_0x487C17B41938052C(iLocal_1317, 26, iLocal_1331, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_1058[iVar0] = unk_0x487C17B41938052C(iLocal_1317, 26, iLocal_1332, 0, 1, 1);
			}
			func_277(uLocal_1058[iVar0], 1);
			unk_0xBC12D08EE7559CCD(uLocal_1058[iVar0], 3, 0);
			unk_0xBC12D08EE7559CCD(uLocal_1058[iVar0], 23, 1);
			unk_0xBC12D08EE7559CCD(uLocal_1058[iVar0], 30, 0);
			unk_0x7DCB4594ACF18DA7(uLocal_1058[iVar0], 2);
			unk_0xABC2CA6F28903308(uLocal_1058[iVar0], 1);
		}
		iVar0++;
	}
}

void func_296()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_1317))
	{
		iLocal_1317 = unk_0xBA715A7BEBA5A1F9(iLocal_1333, Local_1288, fLocal_1237, 1, 1, 0);
		unk_0xD584204572DF0440(iLocal_1317, 0);
	}
}

void func_297(int iParam0)
{
	func_298(&(Global_106934.f_2890), &Global_106934, iParam0, 1);
}

int func_298(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x55A0C756C4A8220C(iParam2, 0))
	{
		func_300(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_299(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100441.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_300(var uParam0, int iParam1, int iParam2)
{
	func_306(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_303(iParam1, 145, 0);
	uParam0->f_11 = func_302(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_301(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x6B62510F212526DC(iParam1, 1) };
		uParam0->f_6 = unk_0x82FE2343F8BDFF0B(iParam1);
		uParam0->f_3 = { unk_0xC35FBD95659582C4(iParam1) };
		if (unk_0xD132EDDA78FF4A51(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78042 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_301(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]))
		{
			if (iParam0 == Global_77137.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 145;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				return Global_97782[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_303(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (Global_97772[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_97782[iVar0])
				{
					if (iParam2 == 0 || unk_0x15CAA6D7B11F1A7C(iParam0) == func_304(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_20(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_305(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_305(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_306(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		func_310(uParam1);
		uParam1->f_66 = unk_0x15CAA6D7B11F1A7C(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x80D16DB58890B7BC(iParam0), 16);
		*uParam1 = unk_0xC264F708491D88D7(iParam0);
		unk_0xDCA20DBA52B32EEC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x356C37F1AA6EA3AA(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x2EE88EB83AF61B18(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xF9D204D7598C0239(iParam0);
		uParam1->f_67 = unk_0x3A5087062A6DBAEF(iParam0);
		uParam1->f_69 = unk_0xD9B8AFE0DD1AD635(iParam0);
		uParam1->f_70 = unk_0xA09765D2ADE13CAE(iParam0);
		unk_0xFB61E9A85A29DDA7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEDB21C30F1BAF83A(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6CA60A8EE52231D2(iParam0, 2))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 28);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 3))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 29);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 30);
		}
		if (unk_0x6CA60A8EE52231D2(iParam0, 1))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_309(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0C2181485E5FB7C2(iParam0);
		}
		if (unk_0xD6F7D32A98E07F93(uParam1->f_66))
		{
			if (unk_0x333A68465EAB12B7(iParam0))
			{
				switch (unk_0xC56DEF5C90606858(iParam0))
				{
					case 3:
					case 0:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 23);
						unk_0xB0550BC91B0159D6(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xC8E55AEB1E2B047F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 9);
		}
		if (unk_0x8B56DBBE237EDF1F(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 10);
		}
		if (unk_0xA4429F0196864BB8(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 13);
			unk_0x3D8BB85A33E13D09(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x21DB5182C34B6C0E(iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 12);
		}
		func_308(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xC49329A4E58D025B(iParam0, iVar0 + 1))
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA763B3F87DA3C316(iParam0, 0))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 11);
		}
		if (unk_0xF2549FF74D64B720(iParam0, "IgnoredByQuickSave") && unk_0x9A1E55620A6C250D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(uParam1->f_77), 27);
		}
	}
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_308(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x75B2C853CB0B3047(*iParam0, iVar1))
			{
				switch (unk_0xDB29312237512D99(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0DD0BC46C4CFD6AD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCCEE7D38FC5D9FD6(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_310(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_311(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0x3C57C2F07FEE34D2("FinaleC2", unk_0x05CBA41180F5D521()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_164(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = func_378(unk_0x05CBA41180F5D521(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_376(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x0B33380E33B61778(&cVar3, uVar2, Global_100478, iParam0);
		}
		else
		{
			iVar5 = func_371(unk_0x05CBA41180F5D521(), 1);
			if (iVar5 != -1)
			{
				Global_113386.f_18574[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_370(iVar5)}, 4);
				unk_0x0B33380E33B61778(&uVar6, 0, Global_100478, iParam0);
			}
			else
			{
				iVar10 = func_369(&(Global_100441.f_3));
				if (iVar10 > -1)
				{
					Global_113386.f_24986.f_4[iVar10] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_312(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3C57C2F07FEE34D2(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_312(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_313(&Global_106934, unk_0x05CBA41180F5D521(), iParam0, uParam1, iParam3, iParam2);
}

void func_313(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_18();
	uParam0->f_1 = func_358();
	unk_0x234904AD6416665B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		func_332(&(uParam0->f_2884), 0);
		func_331(unk_0xE2D3D51028F0428A());
		func_324(unk_0xE2D3D51028F0428A(), 0);
		unk_0xA7E29842FA438ED6(unk_0xE2D3D51028F0428A(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == func_323())
		{
			func_319(unk_0xE2D3D51028F0428A(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x61481F9FBB1C7EDD(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x61481F9FBB1C7EDD(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x61481F9FBB1C7EDD(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x61481F9FBB1C7EDD(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_315(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_314(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_314(var uParam0)
{
	*uParam0 = Global_96290;
	uParam0->f_1 = Global_96291;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_315(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xE2D3D51028F0428A();
	}
	if (unk_0xE5965CDF24F93A9F(iParam2))
	{
		uParam1->f_5 = func_21(iParam2);
	}
	if (func_316(iParam2, &iVar0, iParam3, iParam5))
	{
		func_298(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xE5965CDF24F93A9F(iVar0))
	{
		if (!unk_0x55B23FE400FCEA6B(iVar0, 0))
		{
			if (unk_0x7010991FDA59D3F2(iVar0, joaat("skylift")) && unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
			{
				func_298(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_316(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			if (iParam0 == unk_0xE2D3D51028F0428A())
			{
				*uParam1 = unk_0x9993EF7FDBCDB632();
			}
			else
			{
				*uParam1 = unk_0xB3FF0049C1FD38EC(iParam0, 1);
			}
			if (unk_0xE5965CDF24F93A9F(*uParam1))
			{
				if (unk_0x55A0C756C4A8220C(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(*uParam1, 1), unk_0x6B62510F212526DC(iParam0, 1), 1) < 100f)
					{
						if (unk_0x7010991FDA59D3F2(*uParam1, joaat("taxi")))
						{
							if (unk_0xAB793EA186AB8DAA(*uParam1, -1, 0) != iParam0 && unk_0xAB793EA186AB8DAA(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_317(*uParam1, func_18(), 1))
						{
							sVar0 = unk_0x05CBA41180F5D521();
							if (!unk_0x3C57C2F07FEE34D2(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xD5C6B5E3B93A5EDC(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xF2549FF74D64B720(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x9A1E55620A6C250D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x7010991FDA59D3F2(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_317(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_318(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar9], 0))
		{
			if (unk_0xBEF939CD3AF0B8F0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_318(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_319(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = func_21(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_322(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_321(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_20(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x9315DBF7D972F07A() && unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			if (func_320(161, iParam3))
			{
				uParam1->f_59 = func_175(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_175(753, iParam3, 0);
			}
			uParam1->f_60 = func_175(754, iParam3, 0);
			uParam1->f_61 = func_175(755, iParam3, 0);
		}
		if (unk_0x9315DBF7D972F07A() && iParam0 == unk_0xE2D3D51028F0428A())
		{
			if (func_320(161, iParam3))
			{
				uParam1->f_59 = func_175(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_175(753, iParam3, 0);
			}
		}
	}
}

int func_320(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2866852[iParam0 /*3*/][func_170(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_321(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xF2BC143F97765619(iParam0, iParam1);
		*uParam3 = unk_0x7252A84ECED5E1D4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x5540488889EC816A(iParam0) && unk_0x88FED828C9DFBE76(iParam0) != -1)
				{
					*uParam2 = unk_0x88FED828C9DFBE76(iParam0);
					*uParam3 = unk_0x2FB3EE2B80255AFD(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_322(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x5355BAA621C153CF(iParam0, iParam1);
		*uParam3 = unk_0xF1050E548C37F4A5(iParam0, iParam1);
		*uParam4 = unk_0x272AB65A4E7277B4(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_323()
{
	func_19();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_324(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		if (iParam0 == unk_0xE2D3D51028F0428A())
		{
			func_325(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x48EE6C0E28668C6B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xC965A5495F599392();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x5A52EDE69663AB67(unk_0x9E2D6C50374FCFA9(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x076A5661EF5ABEE4(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_325(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_330(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xCB497F652ACB2DD3(iParam0, func_330(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_328(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (unk_0x54B42DEC4CAB3D41(iParam0, Var4.f_0, iVar2))
						{
							unk_0xCED9E32812D6C7C7(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_328(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0xEFF3ECB899FC93AC();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x75BACF95335672B8(iVar9, &Var11) && !func_327(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x1B5C8EE302FC0D1E(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1F741ABE25B3CDD3(iParam0, Var4.f_0);
					if (unk_0x8FEA2E94638F9767(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0xC158EB99F56CB1FB(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xEF3626A1BE542F5E(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x6019BE7548B68C4B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < unk_0xA67AEA8BBDC78F33(iVar9))
					{
						if (unk_0xD6677A8863DC6340(iVar9, bVar1, &Var50))
						{
							if (!func_326(Var50.f_3))
							{
								if (unk_0x54B42DEC4CAB3D41(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xCED9E32812D6C7C7(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x8FEA2E94638F9767(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_328(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_329(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x8C780BEF2D6DB238(iVar1))
					{
						if (unk_0x45F755B731A742D2(iVar1, iVar2, &Var43))
						{
							if (!func_326(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_329(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x501053EBAB36DB66();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4CD88D794E108BEC(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0xF68107C40359970C(iParam0))
	{
		Global_113386.f_2363.f_539.f_294[iVar0] = unk_0x28E4040BE8C027EF(iParam0);
	}
}

void func_332(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	uParam0->f_3 = unk_0x82FE2343F8BDFF0B(unk_0xE2D3D51028F0428A());
	uParam0->f_5 = unk_0x0E68D1FEE34D0C80(unk_0xE2D3D51028F0428A());
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		uParam0->f_4 = unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xB4C854DD86E40FDA(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()) == unk_0x63AC7EFB770FCB6F(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_335(&iVar0))
		{
			if (func_334(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_18();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_333(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_333(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x15616E8442D3D1E8(Param0))
	{
		iVar0 = unk_0x63AC7EFB770FCB6F(Param4, sParam3);
		if (!unk_0xBCC73B466E2B2350(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x6F7D2FF0780E66BE(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_334(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_50(*uParam1, 0f, 0f, 0f, 0);
}

int func_335(var uParam0)
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (func_357())
		{
			*uParam0 = func_341(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 6, -1, 0, 1, -1);
			if (func_340(*uParam0) && !func_336(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_336(int iParam0)
{
	return func_337(iParam0, 0, 1);
}

int func_337(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (unk_0x9315DBF7D972F07A())
	{
		if (func_339() == 0)
		{
			return BitTest(func_175(func_338(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

int func_339()
{
	return Global_31959;
}

int func_340(int iParam0)
{
	return func_337(iParam0, 5, 1);
}

int func_341(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam3 == 6 || iParam3 == func_356(iVar0))
		{
			if (!bParam5 || func_355(iVar0))
			{
				fVar1 = unk_0x987A5F1E1A67E3C0(Param0, func_342(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_342(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_352(Global_102568);
			break;
		
		case 46:
			if (Global_1853185 != func_12())
			{
				if (func_351(Global_1853185))
				{
					return func_344(2, 2);
				}
				else if (func_343(Global_1853185))
				{
					return func_344(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1966112;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2689235[unk_0x9E2D6C50374FCFA9() /*453*/].f_318.f_6)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_343(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 0) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 1)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_344(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853185 != func_12())
	{
		if (iParam1 == 3)
		{
			if (func_345(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 4))
			{
				if (func_345(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853348[Global_1853185 /*834*/].f_267.f_273, 5))
			{
				if (func_345(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_345(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_350(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_350(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_348(iParam0) };
	}
	else
	{
		Var12 = { func_347(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_346(Var18, -Var0.f_3.f_2) };
	Var18 = { func_346(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x6DB7FBD602C51670(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_346(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_347(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_348(int iParam0)
{
	return func_349(iParam0);
}

struct<6> func_349(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_350(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_351(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 3) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 4)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_352(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_353() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_353()
{
	return func_354(unk_0x9E2D6C50374FCFA9());
}

var func_354(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689235[iParam0 /*453*/].f_318.f_3, 28, 31);
}

int func_355(int iParam0)
{
	return func_337(iParam0, 0, 0);
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_357()
{
	return Global_100493.f_375 > 0;
}

var func_358()
{
	var uVar0;
	
	func_368(&uVar0, unk_0xAA2844CAD88768B5());
	func_367(&uVar0, unk_0x80F97D7D29800A1A());
	func_366(&uVar0, unk_0x09FC827691DACE59());
	func_361(&uVar0, unk_0xD52BD97E61483713());
	func_360(&uVar0, unk_0x771485043FDC55DE());
	func_359(&uVar0, unk_0x1137FD08B8D3F874());
	return uVar0;
}

void func_359(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_361(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_365(*uParam0);
	iVar1 = func_363(*uParam0);
	if (iParam1 < 1 || iParam1 > func_362(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_362(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_363(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_364(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_364(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_365(var uParam0)
{
	return uParam0 & 15;
}

void func_366(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_367(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_368(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_369(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3C57C2F07FEE34D2("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3C57C2F07FEE34D2("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_370(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_371(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x2E87280918B16506(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_372(iVar0, &sVar1);
		if (unk_0x2E87280918B16506(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_372(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_373(uParam1, "Abigail1", func_375(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 1:
			func_373(uParam1, "Abigail2", func_375(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 2:
			func_373(uParam1, "Barry1", func_375(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 3:
			func_373(uParam1, "Barry2", func_375(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 4:
			func_373(uParam1, "Barry3", func_375(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 5:
			func_373(uParam1, "Barry3A", func_375(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 6:
			func_373(uParam1, "Barry3C", func_375(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 7:
			func_373(uParam1, "Barry4", func_375(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_374(iParam0), 0, 0);
			break;
		
		case 8:
			func_373(uParam1, "Dreyfuss1", func_375(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 9:
			func_373(uParam1, "Epsilon1", func_375(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 10:
			func_373(uParam1, "Epsilon2", func_375(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 11:
			func_373(uParam1, "Epsilon3", func_375(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 12:
			func_373(uParam1, "Epsilon4", func_375(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 13:
			func_373(uParam1, "Epsilon5", func_375(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 14:
			func_373(uParam1, "Epsilon6", func_375(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 15:
			func_373(uParam1, "Epsilon7", func_375(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 16:
			func_373(uParam1, "Epsilon8", func_375(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 17:
			func_373(uParam1, "Extreme1", func_375(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 18:
			func_373(uParam1, "Extreme2", func_375(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 19:
			func_373(uParam1, "Extreme3", func_375(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 20:
			func_373(uParam1, "Extreme4", func_375(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 21:
			func_373(uParam1, "Fanatic1", func_375(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_374(iParam0), 1, 0);
			break;
		
		case 22:
			func_373(uParam1, "Fanatic2", func_375(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_374(iParam0), 1, 0);
			break;
		
		case 23:
			func_373(uParam1, "Fanatic3", func_375(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_374(iParam0), 0, 1);
			break;
		
		case 24:
			func_373(uParam1, "Hao1", func_375(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_374(iParam0), 0, 1);
			break;
		
		case 25:
			func_373(uParam1, "Hunting1", func_375(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 26:
			func_373(uParam1, "Hunting2", func_375(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 27:
			func_373(uParam1, "Josh1", func_375(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 28:
			func_373(uParam1, "Josh2", func_375(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 29:
			func_373(uParam1, "Josh3", func_375(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 30:
			func_373(uParam1, "Josh4", func_375(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 31:
			func_373(uParam1, "Maude1", func_375(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 32:
			func_373(uParam1, "Minute1", func_375(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 33:
			func_373(uParam1, "Minute2", func_375(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 34:
			func_373(uParam1, "Minute3", func_375(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 35:
			func_373(uParam1, "MrsPhilips1", func_375(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 36:
			func_373(uParam1, "MrsPhilips2", func_375(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 37:
			func_373(uParam1, "Nigel1", func_375(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 38:
			func_373(uParam1, "Nigel1A", func_375(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 39:
			func_373(uParam1, "Nigel1B", func_375(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 40:
			func_373(uParam1, "Nigel1C", func_375(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 41:
			func_373(uParam1, "Nigel1D", func_375(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_374(iParam0), 1, 1);
			break;
		
		case 42:
			func_373(uParam1, "Nigel2", func_375(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 43:
			func_373(uParam1, "Nigel3", func_375(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 1);
			break;
		
		case 44:
			func_373(uParam1, "Omega1", func_375(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 45:
			func_373(uParam1, "Omega2", func_375(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 46:
			func_373(uParam1, "Paparazzo1", func_375(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 47:
			func_373(uParam1, "Paparazzo2", func_375(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 48:
			func_373(uParam1, "Paparazzo3", func_375(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 49:
			func_373(uParam1, "Paparazzo3A", func_375(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 50:
			func_373(uParam1, "Paparazzo3B", func_375(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 51:
			func_373(uParam1, "Paparazzo4", func_375(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 52:
			func_373(uParam1, "Rampage1", func_375(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 54:
			func_373(uParam1, "Rampage3", func_375(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 55:
			func_373(uParam1, "Rampage4", func_375(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 56:
			func_373(uParam1, "Rampage5", func_375(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_374(iParam0), 0, 0);
			break;
		
		case 53:
			func_373(uParam1, "Rampage2", func_375(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_374(iParam0), 1, 0);
			break;
		
		case 57:
			func_373(uParam1, "TheLastOne", func_375(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 58:
			func_373(uParam1, "Tonya1", func_375(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 59:
			func_373(uParam1, "Tonya2", func_375(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 60:
			func_373(uParam1, "Tonya3", func_375(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 61:
			func_373(uParam1, "Tonya4", func_375(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		case 62:
			func_373(uParam1, "Tonya5", func_375(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_374(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_373(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_375(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_370(iParam0) };
	if (unk_0xACC32B78196FBC2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_377(Global_113386.f_9085.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_377(Global_113386.f_9085.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_377(Global_113386.f_9085.f_99.f_205[11]);
			break;
		
		case 90:
			return func_377(Global_113386.f_9085.f_99.f_205[7]);
			break;
		
		case 93:
			return func_377(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_378(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x2E87280918B16506(sParam0);
	iVar1 = func_379(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_379(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91229[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_380()
{
	int iVar0;
	
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
		if (unk_0xE5965CDF24F93A9F(iVar0))
		{
			if (unk_0xD132EDDA78FF4A51(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
			{
				if (unk_0x207D53F9E0190691(iVar0) <= 0.5f)
				{
					if (!func_58(&uLocal_1349))
					{
						func_55(&uLocal_1349);
					}
				}
				else if (func_58(&uLocal_1349))
				{
					func_56(&uLocal_1349);
				}
				if (func_58(&uLocal_1349))
				{
					if (func_52(&uLocal_1349) > 10f)
					{
						func_37(2);
					}
				}
			}
			else if (func_58(&uLocal_1349))
			{
				func_56(&uLocal_1349);
			}
		}
	}
}

void func_381()
{
	switch (iLocal_1197)
	{
		case 0:
			if (func_412(1084227584, 1) || (bLocal_1155 && unk_0x247B9CD82FD64F32(uLocal_1134)))
			{
				func_411(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1669, fLocal_1672, 1, 1, 1, 0, 0);
				unk_0x02B222EADC9DC566(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0, 0);
				unk_0x917F631782A9CB32(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_410();
				func_409();
				if (!unk_0x55B23FE400FCEA6B(iLocal_1316, 0))
				{
					if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
					{
						unk_0x2F4DB11A0DB3685A(iLocal_1316, 107, "ASSOJva", 1);
						unk_0x4030F85138A50DF6(iLocal_1316, 2500f);
					}
				}
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						unk_0xD501428969A52C0F(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), "OFF");
					}
				}
				iLocal_1197++;
			}
			else if (unk_0x247B9CD82FD64F32(uLocal_1134))
			{
			}
			break;
		
		case 1:
			if (func_382())
			{
				iLocal_1198 = 0;
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
				func_530();
				func_264();
				iLocal_1035 = 9;
			}
			break;
	}
}

int func_382()
{
	int iVar0;
	
	switch (iLocal_1198)
	{
		case 0:
			func_408(0, 0, 1);
			func_407();
			unk_0x9BAE3263D9B1FCB9(uLocal_1334, "HAND_SHAKE", 0.2f);
			unk_0x9BAE3263D9B1FCB9(uLocal_1335, "HAND_SHAKE", 0.2f);
			unk_0x889B4F9D52E23DEE(uLocal_1335, uLocal_1334, 6000, 0, 0);
			unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
			unk_0x3410421C60BF7143(1);
			unk_0xBA6C3C5E9E5A9442();
			func_259("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_1155)
			{
				func_406();
				unk_0x94953C3FF0664F66(0);
				unk_0x080C97B891E2F3AA(0, 1065353216);
			}
			else
			{
				func_397();
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_1198++;
			break;
		
		case 1:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1316, 0))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
				{
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0xE896049AD1887FF0(iLocal_1316))
						{
							unk_0x90F8F7D270431FAE(iLocal_1316);
						}
						unk_0x2F4DB11A0DB3685A(iLocal_1316, 102, "ASSOJva", 1);
						unk_0x4030F85138A50DF6(iLocal_1316, 4500f);
						unk_0x92EE3ED9242DCB76(iLocal_1316, 1);
						func_259("ASS_VA_SNIPE2", 7500, 1);
						unk_0x15F5DB94F871E803(uLocal_1334, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						unk_0x1D809C24759A3FED(uLocal_1334, 0.5f);
						unk_0xE13CE1CD336FFAC9(uLocal_1334, 7f);
						unk_0x9BAE3263D9B1FCB9(uLocal_1334, "HAND_SHAKE", 0.2f);
						unk_0x15F5DB94F871E803(uLocal_1335, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						unk_0x1D809C24759A3FED(uLocal_1335, 0.7f);
						unk_0xE13CE1CD336FFAC9(uLocal_1335, 10f);
						unk_0x9BAE3263D9B1FCB9(uLocal_1335, "HAND_SHAKE", 0.2f);
						unk_0x889B4F9D52E23DEE(uLocal_1335, uLocal_1334, 2000, 3, 3);
						iLocal_1198++;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x55B23FE400FCEA6B(iLocal_1316, 0))
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
				{
					if (unk_0xFE9C4864A7C4CEDB(iLocal_1316) >= 7000f)
					{
						unk_0x9B24CA8F49E61F9E(iLocal_1316);
						iLocal_1196 = 0;
						while (iLocal_1196 < 3)
						{
							if (!unk_0x55B23FE400FCEA6B(uLocal_1054[iLocal_1196], 0))
							{
								if (iLocal_1196 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1196 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (unk_0x174CED88B97C78D9(uLocal_1054[iLocal_1196], joaat("script_task_perform_sequence")) != 1)
								{
									unk_0x7461D7C5BA953BC7(&uLocal_1328);
									unk_0xA888F8CC04F25CC8(&uLocal_1328);
									unk_0xAB7639D658BBCCEE(0, iVar0, 0);
									unk_0x7D1424753688EE7A(0, Local_1252[iLocal_1196 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									unk_0xC963A45B50851768(uLocal_1328);
									unk_0x8ACADA903FCAA42F(uLocal_1054[iLocal_1196], uLocal_1328);
									unk_0x7461D7C5BA953BC7(&uLocal_1328);
								}
							}
							iLocal_1196++;
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_1198++;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() >= 2000)
			{
				if (unk_0x2B1D7439C26D5642() == 4)
				{
					unk_0x15F5DB94F871E803(uLocal_1334, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x9BAE3263D9B1FCB9(uLocal_1334, "HAND_SHAKE", 0.2f);
					unk_0x15F5DB94F871E803(uLocal_1335, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					unk_0x9BAE3263D9B1FCB9(uLocal_1335, "HAND_SHAKE", 0.2f);
					unk_0x889B4F9D52E23DEE(uLocal_1335, uLocal_1334, 4000, 3, 3);
					iLocal_1221 = 4000;
				}
				else
				{
					unk_0x15F5DB94F871E803(uLocal_1334, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					unk_0x9BAE3263D9B1FCB9(uLocal_1334, "HAND_SHAKE", 0.2f);
					unk_0x15F5DB94F871E803(uLocal_1335, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					unk_0x9BAE3263D9B1FCB9(uLocal_1335, "HAND_SHAKE", 0.2f);
					unk_0x889B4F9D52E23DEE(uLocal_1335, uLocal_1334, 4000, 3, 3);
					iLocal_1221 = 4000;
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_1198++;
			}
			break;
		
		case 4:
			if (!iLocal_1194)
			{
				if (unk_0x2B1D7439C26D5642() == 4)
				{
					if (unk_0x83666F9FB8FEBD4B() >= (iLocal_1221 - 300))
					{
						unk_0x9DCF157443EA30D6("CamPushInNeutral", 0, 0);
						unk_0x91DFC8F68F6D9B05(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1194 = 1;
					}
				}
			}
			if (unk_0x83666F9FB8FEBD4B() >= iLocal_1221)
			{
				if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
				{
					if (unk_0xE896049AD1887FF0(iLocal_1316))
					{
						unk_0x90F8F7D270431FAE(iLocal_1316);
					}
				}
				unk_0xA72858C94E70296C(102, "ASSOJva");
				unk_0xA72858C94E70296C(107, "ASSOJva");
				unk_0xCAA02C32EC0C2462(iLocal_1316, 1, 1);
				unk_0xCAA02C32EC0C2462(iLocal_1316, 0, 1);
				unk_0xCAA02C32EC0C2462(iLocal_1316, 2, 1);
				unk_0x3410421C60BF7143(1);
				if (unk_0x2B1D7439C26D5642() == 4)
				{
					unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0xBAEA2321313356D0(1, 0f, 1, 0);
				}
				func_387(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_385(iLocal_382))
	{
		unk_0x3410421C60BF7143(1);
		func_383(1);
		return 1;
	}
	return 0;
}

void func_383(bool bParam0)
{
	unk_0x94953C3FF0664F66(0);
	unk_0x080C97B891E2F3AA(0, 1065353216);
	if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
	{
		if (unk_0xE896049AD1887FF0(iLocal_1316))
		{
			unk_0x90F8F7D270431FAE(iLocal_1316);
		}
		unk_0xA72858C94E70296C(102, "ASSOJva");
		unk_0xA72858C94E70296C(107, "ASSOJva");
		unk_0xC64B6E13A6A7F517(iLocal_1316, Local_1294, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(iLocal_1316, fLocal_1224);
		unk_0xCAA02C32EC0C2462(iLocal_1316, 0, 1);
		unk_0xCAA02C32EC0C2462(iLocal_1316, 1, 1);
		unk_0xCAA02C32EC0C2462(iLocal_1316, 2, 1);
		unk_0xCAA02C32EC0C2462(iLocal_1316, 2, 1);
		iLocal_1198 = 0;
		unk_0xBA6C3C5E9E5A9442();
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		func_387(1, 1, 1);
		if (bParam0)
		{
			func_384();
		}
	}
}

void func_384()
{
	unk_0x5A7ACD1CDF509B0D(1000);
	while (!unk_0xE9E8955A780DDA01())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_385(int iParam0)
{
	if (func_386() && unk_0x320D1840B6DAA1CC() >= iParam0 + 1000)
	{
		unk_0x859006DB870314C5(500);
		while (!unk_0xA829C9A2767AC8EF())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_235(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_386()
{
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (unk_0xF09A4F413B0D30EB(0, 18) || unk_0xF09A4F413B0D30EB(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_387(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 1, 0);
	}
	unk_0xEE61327A6ED2D0B8(1);
	func_389(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0xB60709BD0E075903(1);
		unk_0x72DB022C36FCEA24(1);
	}
	func_388(23, 0);
}

void func_388(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&Global_32207, bParam0);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_32207, bParam0);
	}
}

void func_389(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_396(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_15())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_395(1, iParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_396(0);
		unk_0x45227777D3EBECE5();
		Global_63160 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_395(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_393(unk_0x9E2D6C50374FCFA9())) && !func_391(unk_0x9E2D6C50374FCFA9(), 0)) && !func_390()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_393(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_78317 = 0;
	}
}

bool func_390()
{
	return BitTest(Global_1853348[unk_0x9E2D6C50374FCFA9() /*834*/].f_36.f_18, 14);
}

bool func_391(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_392(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_171();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_393(int iParam0)
{
	if (func_391(iParam0, 0))
	{
		return 1;
	}
	if (func_394())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return BitTest(Global_2621446, 3);
}

int func_395(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_396(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_8136, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_8136, 13);
	}
}

void func_397()
{
	func_398(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_405(), 1, 1, 1, 0, 0);
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
		unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 310.0126f);
	}
}

void func_398(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_399(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_399(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x9993EF7FDBCDB632();
	if (unk_0xE5965CDF24F93A9F(iVar0))
	{
		if (!unk_0xA6A089369417736E(iVar0))
		{
			unk_0x2D58A6131679D82C(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x55A0C756C4A8220C(iVar0, 0))
		{
			if (bParam18)
			{
				func_404(iVar0);
			}
			if (unk_0xD132EDDA78FF4A51(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x6B62510F212526DC(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_401(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x55A0C756C4A8220C(iVar0, 0))
			{
				if (unk_0x7010991FDA59D3F2(iVar0, joaat("taxi")))
				{
					if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != unk_0xE2D3D51028F0428A() && unk_0xAB793EA186AB8DAA(iVar0, -1, 0) != 0)
					{
						if (unk_0x987A5F1E1A67E3C0(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x6B62510F212526DC(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_317(iVar0, func_18(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_400(Param11))
				{
					if (unk_0x55A0C756C4A8220C(iVar0, 0))
					{
						iVar13 = unk_0x15CAA6D7B11F1A7C(iVar0);
						unk_0x9225AE5215730C05(iVar0, &Var4, &Var7);
						if (unk_0x4262B4DCEADC2695(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x55A0C756C4A8220C(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x02B222EADC9DC566(Param7, 5f, 0, 0, 0, 0, 0, 0, 0);
						unk_0xBBF86885619695CE(iVar0, fParam10);
						unk_0xC64B6E13A6A7F517(iVar0, Param7, 1, 0, 0, 1);
						unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x371D594409A68A18(iVar0, 0, 1, 0);
							unk_0x0E97FAE15BEE6379(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xA6A089369417736E(iVar0) || !unk_0x930E64CB0285CAEC(iVar0, 1))
						{
							unk_0x2D58A6131679D82C(iVar0, 1, 1);
						}
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iVar0, 0))
						{
							unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), unk_0x6B62510F212526DC(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xD59CC8123FD1A789(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x17B104183E0F2C46(Param0, Param3, fParam6, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (unk_0xA6A089369417736E(iVar0))
					{
						unk_0x3D81769BEC61BFF8(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xA6A089369417736E(iVar0))
			{
				unk_0x2D58A6131679D82C(iVar0, 1, 0);
			}
			iVar14 = unk_0xAB793EA186AB8DAA(iVar0, -1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar14) && !unk_0xF68107C40359970C(iVar14))
			{
				unk_0xC64B6E13A6A7F517(iVar14, unk_0x6B62510F212526DC(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xAB793EA186AB8DAA(iVar0, 0, 0);
				if (unk_0xE5965CDF24F93A9F(iVar14) && !unk_0xF68107C40359970C(iVar14))
				{
					unk_0xC64B6E13A6A7F517(iVar14, unk_0x6B62510F212526DC(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xAB793EA186AB8DAA(iVar0, 1, 0);
				if (unk_0xE5965CDF24F93A9F(iVar14) && !unk_0xF68107C40359970C(iVar14))
				{
					unk_0xC64B6E13A6A7F517(iVar14, unk_0x6B62510F212526DC(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xAB793EA186AB8DAA(iVar0, 2, 0);
				if (unk_0xE5965CDF24F93A9F(iVar14) && !unk_0xF68107C40359970C(iVar14))
				{
					unk_0xC64B6E13A6A7F517(iVar14, unk_0x6B62510F212526DC(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0xD59CC8123FD1A789(&iVar0);
		}
	}
}

int func_400(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_403(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xCACAD935C0BEE14F(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_402(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_402(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_402(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_402(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_402(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_402(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_402(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_402(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_402(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_402(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_402(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_402(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_402(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_402(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_402(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_402(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_402(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_403(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_404(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x20E1198E4672F72D(iParam0) <= 200f)
			{
				unk_0x2EE80CD0EAEB9B5B(iParam0, 500f);
			}
			if (unk_0xDA70F2C4F36B81CB(iParam0) <= 700f)
			{
				unk_0x2EE80CD0EAEB9B5B(iParam0, 900f);
			}
			if (unk_0x0CF63873D754B965(iParam0) < 200)
			{
				unk_0x2EE80CD0EAEB9B5B(iParam0, 500f);
			}
		}
	}
}

Vector3 func_405()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_406()
{
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x51BB443B279E4104(unk_0xE2D3D51028F0428A());
		unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Local_1306, 1, 0, 0, 1);
		unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 299.4985f);
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_1319))
	{
		if (unk_0x55A0C756C4A8220C(iLocal_1319, 0))
		{
			unk_0x371D594409A68A18(iLocal_1319, 0, 1, 0);
			unk_0xC64B6E13A6A7F517(iLocal_1319, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			unk_0xBBF86885619695CE(iLocal_1319, 296.7603f);
			unk_0x9F65B3BAFA302A65(iLocal_1319, 1084227584);
		}
	}
}

int func_407()
{
	iLocal_382 = unk_0x320D1840B6DAA1CC();
	return iLocal_382;
}

void func_408(int iParam0, int iParam1, int iParam2)
{
	unk_0x64E21045781AFBC9(unk_0xB6BA8B8E3D0B41C6(), 0, iParam0);
	if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		unk_0x85050CAC8798CDD0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), 15f);
	}
	unk_0xEE61327A6ED2D0B8(iParam1);
	func_235(0);
	func_389(1, 1, iParam2, 0, 0, 0, 0);
	unk_0xB60709BD0E075903(0);
	unk_0x72DB022C36FCEA24(0);
	func_388(23, 1);
}

void func_409()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1316))
	{
		if (unk_0x55A0C756C4A8220C(iLocal_1316, 0))
		{
			iLocal_1196 = 0;
			while (iLocal_1196 < 3)
			{
				if (!unk_0xE5965CDF24F93A9F(uLocal_1054[iLocal_1196]))
				{
					if (iLocal_1196 == 0)
					{
						uLocal_1054[iLocal_1196] = unk_0x487C17B41938052C(iLocal_1316, 26, iLocal_1331, -1, 1, 1);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 0, 0, 2, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 3, 0, 0, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 4, 0, 1, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 8, 0, 0, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 11, 0, 0, 0);
					}
					else if (iLocal_1196 == 1)
					{
						uLocal_1054[iLocal_1196] = unk_0x487C17B41938052C(iLocal_1316, 26, iLocal_1331, 0, 1, 1);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 0, 1, 2, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 3, 0, 1, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 4, 0, 0, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 8, 0, 0, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 11, 0, 2, 0);
					}
					else if (iLocal_1196 == 2)
					{
						uLocal_1054[iLocal_1196] = unk_0x487C17B41938052C(iLocal_1316, 26, iLocal_1332, 1, 1, 1);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 0, 1, 2, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 3, 0, 2, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 4, 0, 1, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 8, 0, 0, 0);
						unk_0xE3752B10DC995E95(uLocal_1054[iLocal_1196], 11, 1, 1, 0);
					}
				}
				iLocal_1196++;
			}
		}
	}
}

void func_410()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_1316))
	{
		iLocal_1316 = unk_0xBA715A7BEBA5A1F9(iLocal_1330, Local_1291, fLocal_1223, 1, 1, 0);
		unk_0xF1A23B343DFEDFD0(iLocal_1330);
		unk_0x1B3814E11B085F5E(iLocal_1316, 1);
		unk_0x006574E87E6F1942(iLocal_1316, 1, 1);
		unk_0xAA207A327A73D480(iLocal_1316, 1);
	}
}

void func_411(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_399(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

int func_412(int iParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && func_413(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), iParam0, 1, 1056964608, 0, 1, 0)) && !unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A())) || !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!func_58(&uLocal_367))
		{
			func_56(&uLocal_367);
			if (unk_0xE5965CDF24F93A9F(unk_0x9993EF7FDBCDB632()))
			{
				iVar0 = unk_0x9993EF7FDBCDB632();
				if (unk_0x55A0C756C4A8220C(iVar0, 0))
				{
					unk_0xB2D5451CC5606248(iVar0, 0f);
				}
			}
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
		else if (func_52(&uLocal_367) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_413(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x7653D561C9574763(0, 71, 1);
	unk_0x7653D561C9574763(0, 72, 1);
	unk_0x7653D561C9574763(0, 76, 1);
	unk_0x7653D561C9574763(0, 73, 1);
	unk_0x7653D561C9574763(0, 59, 1);
	unk_0x7653D561C9574763(0, 60, 1);
	if (bParam5)
	{
		unk_0x7653D561C9574763(0, 75, 1);
	}
	unk_0x7653D561C9574763(0, 80, 1);
	if (!bParam6)
	{
		unk_0x7653D561C9574763(0, 69, 1);
		unk_0x7653D561C9574763(0, 70, 1);
		unk_0x7653D561C9574763(0, 68, 1);
	}
	unk_0x7653D561C9574763(0, 74, 1);
	unk_0x7653D561C9574763(0, 86, 1);
	unk_0x7653D561C9574763(0, 81, 1);
	unk_0x7653D561C9574763(0, 82, 1);
	unk_0x7653D561C9574763(0, 138, 1);
	unk_0x7653D561C9574763(0, 136, 1);
	unk_0x7653D561C9574763(0, 114, 1);
	unk_0x7653D561C9574763(0, 107, 1);
	unk_0x7653D561C9574763(0, 110, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 89, 1);
	unk_0x7653D561C9574763(0, 87, 1);
	unk_0x7653D561C9574763(0, 88, 1);
	unk_0x7653D561C9574763(0, 113, 1);
	unk_0x7653D561C9574763(0, 115, 1);
	unk_0x7653D561C9574763(0, 116, 1);
	unk_0x7653D561C9574763(0, 117, 1);
	unk_0x7653D561C9574763(0, 118, 1);
	unk_0x7653D561C9574763(0, 119, 1);
	unk_0x7653D561C9574763(0, 352, 1);
	unk_0x7653D561C9574763(0, 131, 1);
	unk_0x7653D561C9574763(0, 132, 1);
	unk_0x7653D561C9574763(0, 123, 1);
	unk_0x7653D561C9574763(0, 126, 1);
	unk_0x7653D561C9574763(0, 129, 1);
	unk_0x7653D561C9574763(0, 130, 1);
	unk_0x7653D561C9574763(0, 133, 1);
	unk_0x7653D561C9574763(0, 134, 1);
	unk_0x5951E2E1DB653567();
	func_414(iParam0);
	if ((unk_0x320D1840B6DAA1CC() - Global_29) > 500)
	{
		unk_0xD28E3800883DED83(iParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x320D1840B6DAA1CC();
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x48053974ED6F63CE(unk_0x207D53F9E0190691(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_414(int iParam0)
{
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x4545AF649BD80692(iParam0))
		{
			if (unk_0xD377CBCD474FDCFA(iParam0))
			{
				unk_0x416220C999F84215(iParam0, 0);
			}
		}
	}
}

void func_415()
{
	int iVar0;
	
	switch (iLocal_1197)
	{
		case 0:
			func_429(500);
			func_311(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				func_259("ASS_VA_LOSECOPS", 7500, 1);
			}
			unk_0x02B222EADC9DC566(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0, 0);
			iLocal_1197++;
			break;
		
		case 1:
			func_428();
			if (!unk_0xE5965CDF24F93A9F(iLocal_1323))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
				{
					if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
						if (unk_0xAB793EA186AB8DAA(iVar0, -1, 0) == unk_0xE2D3D51028F0428A())
						{
							iLocal_1323 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
							if (unk_0xE5965CDF24F93A9F(iLocal_1323) && !unk_0x55B23FE400FCEA6B(iLocal_1323, 0))
							{
								func_297(iLocal_1323);
							}
						}
					}
				}
			}
			if (!unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
			{
				if (!func_425())
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_1123))
					{
						uLocal_1123 = func_424(Local_1306, 1);
						unk_0xAF62582F3EA39095(uLocal_1123, "ASS_VA_DESTBLIP");
						func_423(&uLocal_1123, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_1137)
						{
							func_259("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_1137 = 1;
						}
						else if (func_422("ASS_VA_LOSECOPS", 0, 0))
						{
							unk_0xBA6C3C5E9E5A9442();
						}
					}
				}
				else if (unk_0x247B9CD82FD64F32(uLocal_1134) && func_421())
				{
					func_420();
					func_264();
					iLocal_1035 = 8;
				}
			}
			else if (!func_425())
			{
				func_419(uLocal_1123, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_37(3);
			}
			func_416();
			break;
	}
}

void func_416()
{
	if (!iLocal_1136)
	{
		if (func_282(Local_1306, 1) <= 100f)
		{
			func_418();
			uLocal_1134 = unk_0xEDF40CC24EE4FF61(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_1136 = 1;
		}
	}
	else if (func_282(Local_1306, 1) > 120f)
	{
		if (unk_0x52D132F41E04CB67(uLocal_1134))
		{
			unk_0x7DE67EEEFEC38205(uLocal_1134);
			func_272();
			iLocal_1136 = 0;
		}
	}
	else if (!unk_0x52D132F41E04CB67(uLocal_1134))
	{
		if (!func_417())
		{
			iLocal_1136 = 0;
		}
	}
}

int func_417()
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), joaat("taxi")))
		{
			if (unk_0xAB793EA186AB8DAA(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0), -1, 0) != unk_0xE2D3D51028F0428A())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_418()
{
	unk_0xD69A0C3662175E68(iLocal_1331);
	unk_0xD69A0C3662175E68(iLocal_1332);
}

void func_419(var uParam0, char* sParam1)
{
	if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0x12DD4A0B247D9B4D(uParam0))
		{
			unk_0xFFD8EB5462B07B59(&uParam0);
			unk_0xBA6C3C5E9E5A9442();
			func_259(sParam1, 7500, 1);
		}
	}
}

void func_420()
{
	if (unk_0x12DD4A0B247D9B4D(uLocal_1123))
	{
		unk_0xFFD8EB5462B07B59(&uLocal_1123);
	}
}

int func_421()
{
	int iVar0;
	
	func_418();
	if (unk_0x0152AA00FA3130F1(iLocal_1331) && unk_0x0152AA00FA3130F1(iLocal_1332))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_422(char* sParam0, int iParam1, int iParam2)
{
	unk_0x09684FD679B0E474(sParam0);
	if (iParam1 == 1)
	{
		unk_0x26C23BE14F66F202(iParam2);
	}
	return unk_0xD7AA4C82B5D00977();
}

void func_423(var uParam0, struct<3> Param1, float fParam4)
{
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		Global_112422 = *uParam0;
		Global_112427 = { Param1 };
		Global_112431 = fParam4;
	}
}

var func_424(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_204(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam3);
	return uVar0;
}

int func_425()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_32(iLocal_1049, Local_1306, 1);
	if (fVar0 < 200f)
	{
		func_427();
	}
	if (func_426())
	{
		if (unk_0x8F41785F110B0DA0(iLocal_1049, Local_1306, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) == 0)
	{
		if ((fVar0 < 2f || unk_0x8F41785F110B0DA0(iLocal_1049, Local_1306, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!unk_0xD132EDDA78FF4A51(unk_0xE2D3D51028F0428A(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_426() && iVar1)
				{
					return 1;
				}
				else if (!unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_426()
{
	int iVar0;
	
	if (unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
	{
		return 0;
	}
	if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return 0;
	}
	if (unk_0xB73D201873640749(unk_0xE2D3D51028F0428A()) || unk_0x0F92AFFDE5783870(unk_0xE2D3D51028F0428A()))
	{
		iLocal_1319 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		iVar0 = unk_0x15CAA6D7B11F1A7C(iLocal_1319);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_1155 = true;
			return 1;
		}
	}
	return 0;
}

void func_427()
{
	var uVar0;
	
	switch (iLocal_1209)
	{
		case 0:
			unk_0xD69A0C3662175E68(joaat("a_m_m_bevhills_01"));
			unk_0xD69A0C3662175E68(joaat("a_f_m_bevhills_01"));
			unk_0xD69A0C3662175E68(joaat("a_f_m_bevhills_02"));
			unk_0xD69A0C3662175E68(joaat("a_m_y_hipster_01"));
			unk_0xD69A0C3662175E68(joaat("taxi"));
			unk_0x70F260358D1A42C4("OJAS_HotelTaxi01");
			unk_0x8FB472886552D737("oddjobs@assassinate@hotel@");
			if ((((((unk_0x0152AA00FA3130F1(joaat("a_m_m_bevhills_01")) && unk_0x0152AA00FA3130F1(joaat("a_f_m_bevhills_01"))) && unk_0x0152AA00FA3130F1(joaat("a_f_m_bevhills_02"))) && unk_0x0152AA00FA3130F1(joaat("taxi"))) && unk_0x0152AA00FA3130F1(joaat("a_m_y_hipster_01"))) && unk_0x6F940C2636C076AD("oddjobs@assassinate@hotel@")) && unk_0xBD3CEA9CD36E271E("OJAS_HotelTaxi01"))
			{
				iLocal_1209++;
			}
			break;
		
		case 1:
			Local_1695[0] = unk_0xA8D58C3AADA2C41C(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1695[1] = unk_0xA8D58C3AADA2C41C(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			unk_0x50274A7EACA3133A(Local_1695[0], 1);
			unk_0x50274A7EACA3133A(Local_1695[1], 1);
			unk_0xA888F8CC04F25CC8(&uVar0);
			unk_0xF30F15F203736DE4(0, Local_1695[1], -1, 0, 2);
			unk_0xDB4F67AAFBF32AA5(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			unk_0xC963A45B50851768(uVar0);
			if (!unk_0x55B23FE400FCEA6B(Local_1695[0], 0))
			{
				unk_0x8ACADA903FCAA42F(Local_1695[0], uVar0);
			}
			unk_0x7461D7C5BA953BC7(&uVar0);
			unk_0xA888F8CC04F25CC8(&uVar0);
			unk_0xF30F15F203736DE4(0, Local_1695[0], -1, 0, 2);
			unk_0xDB4F67AAFBF32AA5(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			unk_0xC963A45B50851768(uVar0);
			if (!unk_0x55B23FE400FCEA6B(Local_1695[1], 0))
			{
				unk_0x8ACADA903FCAA42F(Local_1695[1], uVar0);
			}
			unk_0x7461D7C5BA953BC7(&uVar0);
			Local_1695.f_4 = unk_0xBA715A7BEBA5A1F9(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1, 0);
			unk_0x9F65B3BAFA302A65(Local_1695.f_4, 1084227584);
			Local_1695.f_3 = unk_0x487C17B41938052C(Local_1695.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			unk_0x50274A7EACA3133A(Local_1695.f_3, 1);
			unk_0xF30F15F203736DE4(Local_1695.f_3, Local_1695[0], -1, 0, 2);
			Local_1695.f_8[0] = unk_0xA8D58C3AADA2C41C(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1695.f_8[1] = unk_0xA8D58C3AADA2C41C(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			unk_0x50274A7EACA3133A(Local_1695.f_8[0], 1);
			unk_0x50274A7EACA3133A(Local_1695.f_8[1], 1);
			unk_0x49D97B076E3590AC(Local_1695.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(Local_1695.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1695.f_5[0] = unk_0xA8D58C3AADA2C41C(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1695.f_5[1] = unk_0xA8D58C3AADA2C41C(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			unk_0x50274A7EACA3133A(Local_1695.f_5[0], 1);
			unk_0x50274A7EACA3133A(Local_1695.f_5[1], 1);
			unk_0x49D97B076E3590AC(Local_1695.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x49D97B076E3590AC(Local_1695.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1695.f_11 = 1;
			unk_0xF1A23B343DFEDFD0(joaat("a_m_m_bevhills_01"));
			unk_0xF1A23B343DFEDFD0(joaat("a_f_m_bevhills_01"));
			unk_0xF1A23B343DFEDFD0(joaat("a_f_m_bevhills_02"));
			unk_0xF1A23B343DFEDFD0(joaat("a_m_y_hipster_01"));
			unk_0xF1A23B343DFEDFD0(joaat("taxi"));
			iLocal_1209++;
			break;
		
		case 2:
			break;
	}
}

void func_428()
{
	struct<3> Var0;
	
	if (unk_0xC378B7F0D175A5B0(unk_0x9E2D6C50374FCFA9()) > 0)
	{
		iLocal_1190 = 1;
		return;
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		Var0 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
	}
	if (iLocal_1190)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			fLocal_1249 = unk_0x2A488C176D52CCA5(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), Local_1306);
			iLocal_1190 = 0;
		}
	}
	else if (fLocal_1249 == 0f)
	{
		fLocal_1249 = unk_0x2A488C176D52CCA5(-1510.291f, -946.9932f, 8.278f, Local_1306);
	}
	if (unk_0x2A488C176D52CCA5(Var0, Local_1306) > (fLocal_1249 + 400f))
	{
		func_37(7);
	}
	else if (unk_0x2A488C176D52CCA5(Var0, Local_1306) > (fLocal_1249 + 200f))
	{
		if (!iLocal_1186)
		{
			func_259("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1186 = 1;
		}
	}
}

void func_429(int iParam0)
{
	if (!unk_0xE9E8955A780DDA01())
	{
		unk_0x5A7ACD1CDF509B0D(iParam0);
		while (!unk_0xE9E8955A780DDA01())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_430()
{
	var uVar0;
	float fVar1;
	
	if (unk_0xE5965CDF24F93A9F(iLocal_1062))
	{
		func_435();
		if (!unk_0xF68107C40359970C(iLocal_1062))
		{
			fVar1 = func_29(iLocal_1062, 1);
			unk_0x2378080C93821600(iLocal_1062, 0);
			unk_0xA3400358EEE2B4A2(iLocal_1062, 0);
			unk_0xA7266A50941DBAEA(iLocal_1062, 0);
			unk_0xD07E491BDA082CED(iLocal_1062, 16);
			unk_0xD6A76BAB45A4B460(iLocal_1062, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_58(&uLocal_1361))
				{
					if (!func_28())
					{
						if (func_432(&uLocal_1361, 10f))
						{
							func_35(&uLocal_1368, 3, iLocal_1062, "LESTER", 0, 1);
							func_6(&uLocal_1368, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0x4D21C9FB671ED18F(iLocal_1062) || !unk_0xBC7D3EDF3455BC35(iLocal_1062))
				{
					func_431();
				}
			}
			switch (iLocal_1195)
			{
				case 0:
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
					{
						if ((unk_0xE323E6755636A70E(unk_0xE2D3D51028F0428A()) || (unk_0xE5965CDF24F93A9F(iLocal_1062) && unk_0x0747E45CFF1F74AA(iLocal_1062, unk_0xE2D3D51028F0428A(), 1))) || unk_0x0747E45CFF1F74AA(iLocal_1694, unk_0xE2D3D51028F0428A(), 1))
						{
							if (unk_0x0747E45CFF1F74AA(iLocal_1694, unk_0xE2D3D51028F0428A(), 1))
							{
							}
							unk_0xABFC84F5C4943D7B(iLocal_1062, "move_lester_CaneUp", 1048576000);
							unk_0x49D97B076E3590AC(iLocal_1062, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1195 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0xFCF559C8631ABED7(iLocal_1062, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (unk_0xD01FAFCE275C94F3(iLocal_1062, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0xA888F8CC04F25CC8(&uVar0);
							unk_0x7D1424753688EE7A(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							unk_0x7D1424753688EE7A(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							unk_0xD86A0BC9CC0A625A(0, unk_0x82FE2343F8BDFF0B(iLocal_1062), 0);
							unk_0xC963A45B50851768(uVar0);
							unk_0x8ACADA903FCAA42F(iLocal_1062, uVar0);
							unk_0x7461D7C5BA953BC7(&uVar0);
							unk_0xA8685678DDA27FC3(iLocal_1062, joaat("MotionState_Walk"), 0, 0, 0);
							iLocal_1195 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_431()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1062))
	{
		unk_0x05CB75C0837196F9(&iLocal_1062);
	}
}

int func_432(var uParam0, float fParam1)
{
	if (func_434(uParam0, fParam1))
	{
		func_433(uParam0);
		return 1;
	}
	return 0;
}

void func_433(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_434(var uParam0, float fParam1)
{
	if (func_58(uParam0))
	{
		if (func_52(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_435()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_1062))
	{
		if (unk_0x0747E45CFF1F74AA(iLocal_1062, unk_0xE2D3D51028F0428A(), 1))
		{
			func_37(9);
		}
	}
}

void func_436()
{
	unk_0x1CF3F44FC2EB9F99("ASS1_STOP");
	if (!BitTest(Global_100441.f_20, 13))
	{
		func_530();
	}
	func_437(0, -1, 1);
	unk_0x94953C3FF0664F66(0);
	unk_0x080C97B891E2F3AA(0, 1065353216);
	iLocal_1035 = 18;
	func_429(500);
}

void func_437(int iParam0, int iParam1, int iParam2)
{
	if (func_537() && func_439())
	{
		while (Global_100436 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x27F66B7FE7DB7C3A(0);
		if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				unk_0x3393D1B291D1BD1B(unk_0xE2D3D51028F0428A());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0xE5965CDF24F93A9F(iParam0))
				{
					if (unk_0x55A0C756C4A8220C(iParam0, 0))
					{
						if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), iParam0, 0))
						{
							unk_0xA9F390242F9EB2E1(unk_0xE2D3D51028F0428A(), iParam0, iParam1);
							unk_0x080C97B891E2F3AA(0f, 1065353216);
							unk_0x94953C3FF0664F66(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			}
		}
		unk_0xDE903AC1B5BBC358();
		func_438(0);
	}
}

void func_438(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 13);
	}
}

var func_439()
{
	return BitTest(Global_100441.f_20, 13);
}

void func_440()
{
	while (iLocal_1209 < 2)
	{
		func_427();
		unk_0x4EDE34FBADD967A6(0);
	}
	func_410();
	func_383(0);
	if (!BitTest(Global_100441.f_20, 13))
	{
		func_530();
	}
	iLocal_1164 = 0;
	iLocal_1188 = 0;
	unk_0x02B222EADC9DC566(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0, 0, 0);
	unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
	unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
	unk_0x1CF3F44FC2EB9F99("ASS1_RESTART1");
	while (!func_421())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_437(0, -1, 1);
	unk_0x94953C3FF0664F66(0);
	unk_0x080C97B891E2F3AA(0, 1065353216);
	iLocal_1035 = 9;
	func_429(500);
}

void func_441()
{
	func_437(0, -1, 1);
	unk_0x94953C3FF0664F66(0);
	unk_0x080C97B891E2F3AA(0, 1065353216);
	func_429(500);
	iLocal_1035 = 7;
}

void func_442()
{
	uLocal_1320[0] = unk_0xBA715A7BEBA5A1F9(iLocal_1333, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1, 0);
	uLocal_1320[1] = unk_0xBA715A7BEBA5A1F9(iLocal_1333, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1, 0);
}

void func_443()
{
	uLocal_1334 = unk_0x1BCEC0B1056BD6AC(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1335 = unk_0x1BCEC0B1056BD6AC(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_444()
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((unk_0x0152AA00FA3130F1(iLocal_1330) && unk_0x0152AA00FA3130F1(iLocal_1333)) && unk_0xF777CAA43F4B281A(102, "ASSOJva")) && unk_0xF777CAA43F4B281A(107, "ASSOJva")) && unk_0xBD3CEA9CD36E271E("OJASva_101")) && unk_0xBD3CEA9CD36E271E("OJASva_101a")) && unk_0xBD3CEA9CD36E271E("OJASva_104")) && unk_0x6F940C2636C076AD("ODDJOBS@ASSASSINATE@GUARD")) && unk_0x6F940C2636C076AD("oddjobs@assassinate@hotel@")) && unk_0x01896B71C5AC966E(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_445()
{
	unk_0xD69A0C3662175E68(iLocal_1330);
	unk_0xD69A0C3662175E68(iLocal_1333);
	unk_0x8FB472886552D737("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x8FB472886552D737("oddjobs@assassinate@hotel@");
	unk_0x249A0D3C5714BCF4("ASS_VA", 3);
	unk_0xB018BAA4ED9AA217(102, "ASSOJva");
	unk_0xB018BAA4ED9AA217(107, "ASSOJva");
	unk_0x70F260358D1A42C4("OJASva_101");
	unk_0x70F260358D1A42C4("OJASva_101a");
	unk_0x70F260358D1A42C4("OJASva_104");
}

void func_446(bool bParam0)
{
	if (bParam0)
	{
		unk_0x84A65E2E9CFB6A77(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		unk_0x286ADDBE501FF4C2(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		unk_0x84A65E2E9CFB6A77(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		unk_0x83E10DA4845841B7(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_447()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var3 = { -1279.658f, -222.0533f, 41.446f };
	func_35(&uLocal_1368, 1, iLocal_1049, "FRANKLIN", 0, 1);
	unk_0x8576657A629C4B0A(0.2f);
	unk_0xD642E010A287ADFD("Guards", &iLocal_1336);
	unk_0x9972EFADA7A2A47D(1, joaat("COP"), iLocal_1336);
	unk_0x9972EFADA7A2A47D(1, iLocal_1336, joaat("COP"));
	unk_0x9972EFADA7A2A47D(5, iLocal_1336, joaat("player"));
	unk_0x9972EFADA7A2A47D(5, joaat("player"), iLocal_1336);
	unk_0x7A997A0A971D305F(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	unk_0xA8AEDE296853BB64(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_1132 = unk_0x2915D98110F23A29(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_1133 = unk_0x2915D98110F23A29(Var3 - Vector(45f, 35f, 35f), Var3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_448()
{
	StringCopy(&Local_969, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_969.f_6), {Global_63169}, 6);
	StringCopy(&(Local_969.f_12), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_969.f_18), "ASS_VA_BASE", 24);
	StringCopy(&(Local_969.f_24), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_969.f_30), "ASS_VA_CASH", 24);
	StringCopy(&(Local_969.f_36), "ASS_VA_COMP", 24);
	StringCopy(&(Local_969.f_42), "ASS_VA_COMP", 24);
	StringCopy(&(Local_969.f_48), "ASS_VA_COMP", 24);
	StringCopy(&(Local_969.f_54), "ASS_VA_COMP", 24);
}

void func_449()
{
	Local_1288 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1237 = 260.3612f;
	Local_1291 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1223 = 96.8755f;
	Local_1294 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1224 = 201.0763f;
	fLocal_1238 = 40f;
	Local_360.f_2 = 40f;
	Local_1252[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1252[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1252[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1239[0] = 157.3177f;
	fLocal_1239[1] = 58.3594f;
	fLocal_1239[2] = 65.6443f;
	Local_1272[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1272[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1272[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1272[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1272[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1225[0] = 160.0748f;
	fLocal_1225[1] = 58.3365f;
	fLocal_1225[2] = 58.0214f;
	fLocal_1225[3] = 97.6664f;
	fLocal_1225[4] = 225.8689f;
	iLocal_1196 = 0;
	while (iLocal_1196 <= 4)
	{
		uLocal_1231[iLocal_1196] = unk_0xC4EAB25A108C2429(0f, 2f);
		iLocal_1196++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1048 = 0;
	iLocal_1184 = 0;
	bLocal_1185 = false;
	iLocal_1170 = 0;
	bLocal_1193 = false;
	iLocal_1192 = 0;
}

void func_450()
{
	switch (iLocal_1197)
	{
		case 0:
			unk_0xD536FD78D8A135F1("ASS_INT_2_ALT1", 8);
			unk_0xD69A0C3662175E68(joaat("ig_lestercrest"));
			unk_0xD69A0C3662175E68(joaat("prop_cs_walking_stick"));
			unk_0x8FB472886552D737("oddjobs@assassinate@hotel@leadin");
			unk_0x8FB472886552D737("oddjobs@assassinate@hotel@leaning@");
			unk_0x511A0AF0E8B0BF9A("move_lester_CaneUp");
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
			unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			if ((((unk_0x0152AA00FA3130F1(joaat("ig_lestercrest")) && unk_0x0152AA00FA3130F1(joaat("prop_cs_walking_stick"))) && unk_0x6F940C2636C076AD("oddjobs@assassinate@hotel@leadin")) && unk_0x6F940C2636C076AD("oddjobs@assassinate@hotel@leaning@")) && unk_0xA7A5D14F877C9047("move_lester_CaneUp"))
			{
				iLocal_1197++;
			}
			break;
		
		case 1:
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				func_408(56, 0, 1);
				func_411(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				unk_0x7A997A0A971D305F(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), Local_1673, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), fLocal_1676);
				unk_0xEB087B19F63AB053(unk_0xE2D3D51028F0428A(), 0, 0);
				unk_0x49D97B076E3590AC(unk_0xE2D3D51028F0428A(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!unk_0x876B1078E90C91CB(uLocal_1677))
				{
					uLocal_1677 = unk_0x1BCEC0B1056BD6AC(26379945, Local_1679, Local_1682, 42.2032f, 1, 2);
					unk_0x9BAE3263D9B1FCB9(uLocal_1677, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0x876B1078E90C91CB(uLocal_1678))
				{
					uLocal_1678 = unk_0x1BCEC0B1056BD6AC(26379945, Local_1685, Local_1688, 42.2032f, 0, 2);
					unk_0x889B4F9D52E23DEE(uLocal_1678, uLocal_1677, 5000, 1, 1);
					unk_0x9BAE3263D9B1FCB9(uLocal_1677, "HAND_SHAKE", 0.3f);
				}
				unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
				if (func_46(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
				iLocal_1197++;
			}
			break;
		
		case 2:
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				if (unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_58(&uLocal_1691))
					{
						func_55(&uLocal_1691);
					}
				}
				if (func_58(&uLocal_1691))
				{
					if (func_52(&uLocal_1691) > 6f)
					{
						iLocal_1197++;
					}
				}
			}
			break;
		
		case 3:
			if (func_451())
			{
				iLocal_1197++;
			}
			break;
		
		case 4:
			func_389(1, 1, 1, 0, 0, 0, 0);
			if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0x48F297980C708DB7(unk_0xE2D3D51028F0428A(), "Franklin", 0, 0, 0);
			}
			unk_0x48F297980C708DB7(iLocal_1062, "Lester", 2, joaat("ig_lestercrest"), 0);
			unk_0x48F297980C708DB7(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			unk_0xF44EE79112016B61(0);
			unk_0xBA5D7196EACB9282(unk_0x9E2D6C50374FCFA9());
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
			iLocal_1197++;
			break;
		
		case 5:
			if (unk_0xF34D8FCAE3FD4EE4())
			{
				unk_0x4B248030F70A5D8B(0);
				unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
				iLocal_1197++;
			}
			break;
		
		case 6:
			if (unk_0x4131052989DE1278())
			{
				unk_0xBD1E8007D7DFA747(0);
			}
			if (!unk_0xE5965CDF24F93A9F(iLocal_1062))
			{
				if (unk_0x3B4294CABAAF7B71("Lester", 0))
				{
					if (unk_0xE5965CDF24F93A9F(unk_0xA77263F8C4822DA4("Lester", 0)))
					{
						iLocal_1062 = unk_0x28AA31872A651BC7(unk_0xA77263F8C4822DA4("Lester", 0));
					}
				}
			}
			if (!unk_0xE5965CDF24F93A9F(iLocal_1063))
			{
				if (unk_0x3B4294CABAAF7B71("WalkingStick_Lester", 0))
				{
					if (unk_0xE5965CDF24F93A9F(unk_0xA77263F8C4822DA4("WalkingStick_Lester", 0)))
					{
						iLocal_1063 = unk_0xA77263F8C4822DA4("WalkingStick_Lester", 0);
					}
				}
			}
			unk_0x94953C3FF0664F66(0);
			unk_0x080C97B891E2F3AA(0, 1065353216);
			if (unk_0x6F2E1326DB60D575("Franklin", 0))
			{
			}
			if (unk_0xE5965CDF24F93A9F(unk_0xA77263F8C4822DA4("Lester", 0)))
			{
				if (unk_0x6F2E1326DB60D575("Lester", 0))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_1062) && !unk_0xF68107C40359970C(iLocal_1062))
					{
						unk_0xC64B6E13A6A7F517(iLocal_1062, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						unk_0xBBF86885619695CE(iLocal_1062, -11f);
						unk_0x49D97B076E3590AC(iLocal_1062, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						unk_0xEB087B19F63AB053(iLocal_1062, 0, 0);
					}
				}
			}
			if (unk_0xE5965CDF24F93A9F(unk_0xA77263F8C4822DA4("Lester", 0)))
			{
				if (unk_0x6F2E1326DB60D575("WalkingStick_Lester", 0))
				{
					if (unk_0xE5965CDF24F93A9F(iLocal_1062) && !unk_0xF68107C40359970C(iLocal_1062))
					{
						unk_0x9A97DC6DBC7B223D(iLocal_1063, iLocal_1062, unk_0xB897FCFCFA664B38(iLocal_1062, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					}
				}
			}
			if (unk_0xA08A61313445DB46() && !unk_0xF34D8FCAE3FD4EE4())
			{
				func_389(0, 1, 1, 0, 0, 0, 0);
				if (!unk_0xF68107C40359970C(iLocal_1062))
				{
					unk_0xBED097BB6359F09C(iLocal_1062, 0, 0, 0, 0, 0, 0, 0, 0);
					unk_0xC252F409BDE7A700(iLocal_1062, 1);
				}
				unk_0x94953C3FF0664F66(0);
				unk_0x080C97B891E2F3AA(0, 1065353216);
				if (unk_0xA829C9A2767AC8EF())
				{
					unk_0x4EDE34FBADD967A6(0);
					unk_0x5A7ACD1CDF509B0D(500);
				}
				func_387(1, 1, 1);
				iLocal_1197++;
			}
			break;
		
		case 7:
			func_56(&uLocal_1361);
			func_264();
			iLocal_1035 = 4;
			break;
	}
}

bool func_451()
{
	bool bVar0;
	
	bVar0 = unk_0xC6398AABC3E92273();
	if (!Global_78318)
	{
		if (!bVar0)
		{
			Global_78318 = 1;
		}
	}
	return bVar0;
}

void func_452()
{
	if (!unk_0xE5965CDF24F93A9F(iLocal_1694))
	{
		iLocal_1694 = unk_0x87A467676BDF8C35(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_453()
{
	int iVar0;
	
	if (iLocal_1035 > 7)
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				iVar0 = unk_0x78291C96EFBBDC75();
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (unk_0x55A0C756C4A8220C(iVar0, 0))
					{
						if ((iVar0 != iLocal_1324[0] && iVar0 != iLocal_1324[1]) && iVar0 != iLocal_1324[2])
						{
							if (iLocal_1220 >= 2)
							{
								iLocal_1220 = -1;
							}
							iLocal_1324[iLocal_1220 + 1] = iVar0;
							unk_0x2D58A6131679D82C(iLocal_1324[iLocal_1220 + 1], 1, 0);
							unk_0xDDEE81F50A761F49(iLocal_1324[iLocal_1220 + 1], 0);
							iLocal_1220++;
						}
					}
				}
			}
		}
	}
}

void func_454()
{
	int iVar0;
	
	if (iLocal_1182)
	{
		iVar0 = func_36(1116471296, 1);
		if (!unk_0xF68107C40359970C(iVar0))
		{
			func_34(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1368, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_455()
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1695.f_11)
	{
		if (!bLocal_1173)
		{
			if (iLocal_1035 < 10)
			{
				if (func_461())
				{
					iVar0 = func_36(1116471296, 1);
					if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(iVar0, 0))
					{
						if (func_29(iVar0, 0) < 10f)
						{
							Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
							Var1 = { Var1 };
							func_35(&uLocal_1368, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1368, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_460();
					bLocal_1173 = true;
				}
				if (iLocal_1138)
				{
					func_460();
					bLocal_1173 = true;
				}
				else
				{
					func_459();
					func_456();
				}
			}
		}
	}
}

void func_456()
{
	if (bLocal_1144)
	{
		if (IntToFloat(iLocal_1217) < (IntToFloat(iLocal_1214) - 5f))
		{
			func_458(Local_1695.f_8[0], 1);
			func_458(Local_1695.f_8[1], 1);
			func_458(Local_1695.f_5[0], 1);
			func_458(Local_1695.f_5[1], 1);
		}
		else
		{
			if ((func_29(Local_1695.f_8[0], 0) < 1f || func_29(Local_1695.f_8[1], 0) < 1f) || iLocal_1142)
			{
				func_457(Local_1695.f_8[0], 1);
				func_457(Local_1695.f_8[1], 1);
			}
			if (!iLocal_1142)
			{
				func_457(Local_1695.f_5[0], 0);
				func_457(Local_1695.f_5[1], 0);
			}
			else
			{
				func_457(Local_1695.f_5[0], 1);
				func_457(Local_1695.f_5[1], 1);
			}
		}
	}
}

void func_457(int iParam0, int iParam1)
{
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 1)
		{
			if (func_29(iParam0, 0) < 1f || iParam1)
			{
				func_458(iParam0, 1);
			}
		}
	}
}

void func_458(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if ((bParam1 && unk_0x174CED88B97C78D9(iParam0, joaat("script_task_perform_sequence")) != 1) || !bParam1)
		{
			unk_0xA888F8CC04F25CC8(&uVar0);
			unk_0x9603C0EC536C6425(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			unk_0xD86A0BC9CC0A625A(0, 1193033728, 0);
			unk_0xC963A45B50851768(uVar0);
			unk_0x8ACADA903FCAA42F(iParam0, uVar0);
			unk_0x7461D7C5BA953BC7(&uVar0);
		}
	}
}

void func_459()
{
	int iVar0;
	
	switch (iLocal_1210)
	{
		case 0:
			if (((iLocal_1158 || iLocal_1142) || func_29(Local_1695[0], 0) < 1f) || func_29(Local_1695[1], 0) < 1f)
			{
				if (!unk_0x55B23FE400FCEA6B(Local_1695[0], 0) && !unk_0x55B23FE400FCEA6B(Local_1695[1], 0))
				{
					unk_0xF30F15F203736DE4(Local_1695[0], Local_1695[1], -1, 0, 2);
					unk_0xF30F15F203736DE4(Local_1695[1], Local_1695[0], -1, 0, 2);
				}
				if (((unk_0xE5965CDF24F93A9F(Local_1695[1]) && unk_0xE5965CDF24F93A9F(Local_1695.f_4)) && !unk_0xF68107C40359970C(Local_1695[1])) && unk_0x55A0C756C4A8220C(Local_1695.f_4, 0))
				{
					unk_0x03A927199A2DFE46(Local_1695[1]);
					unk_0xB486640392EC50BB(Local_1695[1], Local_1695.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_58(&uLocal_1352))
				{
					func_55(&uLocal_1352);
				}
				iLocal_1210++;
			}
			break;
		
		case 1:
			if (!iLocal_1178)
			{
				if (func_58(&uLocal_1352))
				{
					if (func_52(&uLocal_1352) > 3f)
					{
						if (((unk_0xE5965CDF24F93A9F(Local_1695[0]) && unk_0xE5965CDF24F93A9F(Local_1695.f_4)) && !unk_0xF68107C40359970C(Local_1695[0])) && unk_0x55A0C756C4A8220C(Local_1695.f_4, 0))
						{
							if (unk_0x174CED88B97C78D9(Local_1695[0], joaat("script_task_enter_vehicle")) != 1)
							{
								unk_0x03A927199A2DFE46(Local_1695[0]);
								unk_0xB486640392EC50BB(Local_1695[0], Local_1695.f_4, 20000, 1, 1f, 1, 0);
								iLocal_1178 = 1;
							}
						}
					}
				}
				else
				{
					func_55(&uLocal_1352);
				}
			}
			if (!unk_0xF68107C40359970C(Local_1695[0]) && !unk_0xF68107C40359970C(Local_1695[1]))
			{
				if (unk_0xF6F5D18EF8EAB859(Local_1695[0], Local_1695.f_4, 0) && unk_0xF6F5D18EF8EAB859(Local_1695[1], Local_1695.f_4, 0))
				{
					if (!unk_0x55B23FE400FCEA6B(Local_1695.f_3, 0) && !unk_0x55B23FE400FCEA6B(Local_1695.f_4, 0))
					{
						unk_0xC89EA639A6F338A6(Local_1695.f_3);
						func_56(&uLocal_1352);
					}
					iLocal_1210++;
				}
			}
			break;
		
		case 2:
			if (func_58(&uLocal_1352))
			{
				if (func_52(&uLocal_1352) > 3f)
				{
					if (!unk_0xF68107C40359970C(Local_1695.f_3) && unk_0x55A0C756C4A8220C(Local_1695.f_4, 0))
					{
						unk_0xA24707688BA83CEA(Local_1695.f_3, Local_1695.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1210++;
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x55B23FE400FCEA6B(Local_1695.f_3, 0) && !unk_0x55B23FE400FCEA6B(Local_1695.f_4, 0))
			{
				if (!unk_0x22FF01F89D3006C0(Local_1695.f_4) || iLocal_1181)
				{
					unk_0xAD6CDBCDA713560A(Local_1695.f_3, Local_1695.f_4, 10f, 786603);
					iLocal_1210++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1181)
			{
				if (!unk_0xF68107C40359970C(uLocal_1058[0]))
				{
					iVar0 = uLocal_1058[0];
				}
				else
				{
					iVar0 = func_31(25f);
				}
				if (unk_0xE5965CDF24F93A9F(iVar0))
				{
					if (!unk_0xF68107C40359970C(iVar0))
					{
						if (!func_28())
						{
							func_34(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1368, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_56(&uLocal_1352);
				iLocal_1210++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_460()
{
	if ((unk_0xE5965CDF24F93A9F(Local_1695.f_3) && !unk_0x55B23FE400FCEA6B(Local_1695.f_3, 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695.f_3, unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695[0]) && !unk_0x55B23FE400FCEA6B(Local_1695[0], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695[0], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
		unk_0xDC6110E0F8FF9DA0(Local_1695[0], 2, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695[1]) && !unk_0x55B23FE400FCEA6B(Local_1695[1], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695[1], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
		unk_0xDC6110E0F8FF9DA0(Local_1695[1], 2, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695.f_8[0]) && !unk_0x55B23FE400FCEA6B(Local_1695.f_8[0], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695.f_8[0], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695.f_8[1]) && !unk_0x55B23FE400FCEA6B(Local_1695.f_8[1], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695.f_8[1], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695.f_5[0]) && !unk_0x55B23FE400FCEA6B(Local_1695.f_5[0], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695.f_5[0], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
	}
	if ((unk_0xE5965CDF24F93A9F(Local_1695.f_5[1]) && !unk_0x55B23FE400FCEA6B(Local_1695.f_5[1], 0)) && !unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x7734082B0EDB0BE0(Local_1695.f_5[1], unk_0xE2D3D51028F0428A(), 1000f, -1, 0, 0);
	}
}

int func_461()
{
	if (!unk_0x55B23FE400FCEA6B(Local_1695.f_3, 0))
	{
		if (unk_0x177106D5E97D1958(Local_1695.f_3))
		{
			if (unk_0xBA67EB7A53262B5B(Local_1695.f_3) == unk_0xE2D3D51028F0428A())
			{
				return 1;
			}
		}
	}
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0x55B23FE400FCEA6B(Local_1695.f_4, 0))
	{
		if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_1695.f_4, 0))
		{
			return 1;
		}
	}
	if (func_118(Local_1695[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1695[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1695.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1695.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1695.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_118(Local_1695.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_117(Local_1695.f_4))
	{
		return 1;
	}
	if (unk_0x89D0E0233F6E59A7(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_462()
{
	func_538();
}

int func_463()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100441 == 7 || Global_100441 == 8)
	{
		return 1;
	}
	return 0;
}

void func_464(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_537())
	{
		unk_0x2C07CBAFAC54A645(0);
		unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 2);
		unk_0x27F66B7FE7DB7C3A(1);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
		}
		Global_100437 = { Param0 };
		Global_100440 = fParam3;
		Global_100436 = 1;
		if (iParam4 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 14);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xCED9E32812D6C7C7(&(Global_100441.f_20), 24);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_100441.f_20), 24);
		}
		func_438(1);
	}
}

int func_465(struct<3> Param0, float fParam3)
{
	return func_466(&(Global_106934.f_2890), Param0, fParam3, 0);
}

int func_466(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_526(uParam0))
	{
		if (func_50(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x5F8653E60ED2288E(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_525(uParam0))
		{
			unk_0x7A997A0A971D305F(Param1, 5f, 1, 0, 0, 0);
			func_524(Param1, 5f, 0);
			iVar0 = unk_0xBA715A7BEBA5A1F9(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xA539EDE8DA5BBC22(iVar0, Param1, 0, 0, 1);
				}
				func_499(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD2B5B1C8FC84FE0F(uParam0->f_12.f_66) || unk_0x5C921200CA5CBF8E(uParam0->f_12.f_66))
				{
					if (!unk_0x7CBF98360C4B22E4(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x9F65B3BAFA302A65(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xCB09A834F0C86FBB(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_498(uParam0->f_11, 1);
						}
						else if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iVar0)))
						{
							func_498(uParam0->f_11, 2);
						}
					}
					unk_0xFA37094E2DF03E75(iVar0, 0);
					unk_0x0FCB0A306FF51ECA(iVar0, 0);
					unk_0x05EAB38F5AC8DA1D(iVar0, 1);
					func_497(iVar0, uParam0->f_11);
				}
				else if ((!func_494(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "startup_positioning"))
				{
					iVar8 = func_493(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_488(iVar8);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (unk_0x2E87280918B16506(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							func_485(24, 0);
							func_488(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_467(iVar0, uParam0->f_11);
				}
				unk_0xF1A23B343DFEDFD0(uParam0->f_12.f_66);
				Var1 = { unk_0x6B62510F212526DC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_468(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xAB793EA186AB8DAA(iParam0, -1, 0);
		if (!unk_0xE5965CDF24F93A9F(iVar0))
		{
			iVar0 = unk_0x48512AC2C4218836(iParam0, -1);
		}
		if (unk_0xE5965CDF24F93A9F(iVar0) && !unk_0xF68107C40359970C(iVar0))
		{
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3C57C2F07FEE34D2(unk_0x80D16DB58890B7BC(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	func_306(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_468(int iParam0)
{
	if ((((((((((!unk_0xE5965CDF24F93A9F(iParam0) || !unk_0x55A0C756C4A8220C(iParam0, 0)) || func_317(iParam0, 0, 0)) || func_317(iParam0, 1, 0)) || func_317(iParam0, 2, 0)) || func_302(iParam0) != 145) || func_484(iParam0)) || func_483(iParam0)) || func_482(iParam0)) || func_481(iParam0)) || !func_469(unk_0x15CAA6D7B11F1A7C(iParam0)))
	{
		if (func_483(iParam0))
		{
		}
		if (func_483(iParam0))
		{
		}
		if (func_317(iParam0, 0, 0))
		{
		}
		if (func_317(iParam0, 1, 0))
		{
		}
		if (func_317(iParam0, 2, 0))
		{
		}
		if (func_302(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_469(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_470(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD2B5B1C8FC84FE0F(iParam0) || unk_0xD6F7D32A98E07F93(iParam0)) || unk_0x4262B4DCEADC2695(iParam0)) || unk_0xF4AD75B2D964D8AB(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_470(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2886B1BFE0896A9A(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x9315DBF7D972F07A()) || (iParam0 == joaat("buffalo3") && !unk_0x9315DBF7D972F07A())) || (iParam0 == joaat("gauntlet2") && !unk_0x9315DBF7D972F07A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x9315DBF7D972F07A()))
	{
		if (!func_480())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x63913871ECC3707E())
		{
			if (unk_0xCD58DE0B13D04118(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x1B5C8EE302FC0D1E(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_479() && !func_478()) && !func_477()) && !func_476()) && !func_480())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_475() || unk_0x8FE9914D4872D601()) || func_474())
		{
		}
		else if (!func_477())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_473(iParam0))
		{
			return 0;
		}
	}
	if (!func_471(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_471(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_472())
	{
		return 1;
	}
	unk_0x5D66DA471CACD32B(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x5B1B2A8FE51FDB2D(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_472()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

int func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2787545)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x48352343BC5A41AE();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7058 && !Global_262145.f_13394) && iVar1 < Global_262145.f_13395)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14743)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14739)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14740)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14741)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17368 && iVar1 < Global_262145.f_17333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17363 && iVar1 < Global_262145.f_17328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17367 && iVar1 < Global_262145.f_17332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17366 && iVar1 < Global_262145.f_17331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17360 && iVar1 < Global_262145.f_17325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17361 && iVar1 < Global_262145.f_17326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17364 && iVar1 < Global_262145.f_17329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17365 && iVar1 < Global_262145.f_17330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17362 && iVar1 < Global_262145.f_17327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17370 && iVar1 < Global_262145.f_17335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17371 && iVar1 < Global_262145.f_17336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17359 && iVar1 < Global_262145.f_17324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17358 && iVar1 < Global_262145.f_17323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17357 && iVar1 < Global_262145.f_17322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17369 && iVar1 < Global_262145.f_17334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17372 && iVar1 < Global_262145.f_17337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17373 && iVar1 < Global_262145.f_17338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17374 && iVar1 < Global_262145.f_17339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17375 && iVar1 < Global_262145.f_17340)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17522 && iVar1 < Global_262145.f_17544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17523 && iVar1 < Global_262145.f_17545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17524 && iVar1 < Global_262145.f_17546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17525 && iVar1 < Global_262145.f_17547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17526 && iVar1 < Global_262145.f_17548)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17527 && iVar1 < Global_262145.f_17549)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17529 && iVar1 < Global_262145.f_17550)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17530 && iVar1 < Global_262145.f_17551)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17531 && iVar1 < Global_262145.f_17552)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17532 && iVar1 < Global_262145.f_17553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17533 && iVar1 < Global_262145.f_17554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17534 && iVar1 < Global_262145.f_17555)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17535 && iVar1 < Global_262145.f_17556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17541 && iVar1 < Global_262145.f_17563)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17538 && iVar1 < Global_262145.f_17559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17539 && iVar1 < Global_262145.f_17560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17540 && iVar1 < Global_262145.f_17561)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17528 && iVar1 < Global_262145.f_17562)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17542 && iVar1 < Global_262145.f_17564)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17536 && iVar1 < Global_262145.f_17557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17537 && iVar1 < Global_262145.f_17558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17543 && iVar1 < Global_262145.f_17565)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19176 && iVar1 < Global_262145.f_19273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19177 && iVar1 < Global_262145.f_19274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19178 && iVar1 < Global_262145.f_19275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19179 && iVar1 < Global_262145.f_19276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19180 && iVar1 < Global_262145.f_19277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19181 && iVar1 < Global_262145.f_19278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19182 && iVar1 < Global_262145.f_19279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19183 && iVar1 < Global_262145.f_19280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19184 && iVar1 < Global_262145.f_19281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19185 && iVar1 < Global_262145.f_19282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19186 && iVar1 < Global_262145.f_19283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19187 && iVar1 < Global_262145.f_19284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19188 && iVar1 < Global_262145.f_19285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19189 && iVar1 < Global_262145.f_19286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19190 && iVar1 < Global_262145.f_19287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19191 && iVar1 < Global_262145.f_19288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19192 && iVar1 < Global_262145.f_19289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19193 && iVar1 < Global_262145.f_19290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19194 && iVar1 < Global_262145.f_19291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19195 && iVar1 < Global_262145.f_19292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19196 && iVar1 < Global_262145.f_19293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19197 && iVar1 < Global_262145.f_19294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19198 && iVar1 < Global_262145.f_19295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19199 && iVar1 < Global_262145.f_19296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19200 && iVar1 < Global_262145.f_19297)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20257 && iVar1 < Global_262145.f_20253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20258 && iVar1 < Global_262145.f_20254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20259 && iVar1 < Global_262145.f_20255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20260 && iVar1 < Global_262145.f_20256)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21138 && iVar1 < Global_262145.f_21146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21139 && iVar1 < Global_262145.f_21147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21140 && iVar1 < Global_262145.f_21148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21141 && iVar1 < Global_262145.f_21149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21142 && iVar1 < Global_262145.f_21150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21143 && iVar1 < Global_262145.f_21151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21921 && iVar1 < Global_262145.f_21941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21933 && iVar1 < Global_262145.f_21953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21924 && iVar1 < Global_262145.f_21944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21934 && iVar1 < Global_262145.f_21954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21922 && iVar1 < Global_262145.f_21942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21938 && iVar1 < Global_262145.f_21958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21936 && iVar1 < Global_262145.f_21956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21937 && iVar1 < Global_262145.f_21957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21932 && iVar1 < Global_262145.f_21952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21939 && iVar1 < Global_262145.f_21959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21935 && iVar1 < Global_262145.f_21955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21931 && iVar1 < Global_262145.f_21951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21923 && iVar1 < Global_262145.f_21943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21925 && iVar1 < Global_262145.f_21945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21926 && iVar1 < Global_262145.f_21946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21927 && iVar1 < Global_262145.f_21947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21928 && iVar1 < Global_262145.f_21948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21929 && iVar1 < Global_262145.f_21949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21930 && iVar1 < Global_262145.f_21950)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22889 && iVar1 < Global_262145.f_22917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22890 && iVar1 < Global_262145.f_22918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22891 && iVar1 < Global_262145.f_22919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22892 && iVar1 < Global_262145.f_22920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22893 && iVar1 < Global_262145.f_22921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22894 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22895 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22896 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22897 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22898 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22899 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22900 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22901 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22902 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22903 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22904 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22905 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22944)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24109 && iVar1 < Global_262145.f_24125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24110 && iVar1 < Global_262145.f_24126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24114 && iVar1 < Global_262145.f_24130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24117 && iVar1 < Global_262145.f_24133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24122 && iVar1 < Global_262145.f_24138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24116 && iVar1 < Global_262145.f_24132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24108 && iVar1 < Global_262145.f_24124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24115 && iVar1 < Global_262145.f_24131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24121 && iVar1 < Global_262145.f_24137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24120 && iVar1 < Global_262145.f_24136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24111 && iVar1 < Global_262145.f_24127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24113 && iVar1 < Global_262145.f_24129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24123 && iVar1 < Global_262145.f_24139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24119 && iVar1 < Global_262145.f_24135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24112 && iVar1 < Global_262145.f_24128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24118 && iVar1 < Global_262145.f_24134)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24199 && iVar1 < Global_262145.f_24186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24200 && iVar1 < Global_262145.f_24187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24205 && iVar1 < Global_262145.f_24192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24204 && iVar1 < Global_262145.f_24191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24202 && iVar1 < Global_262145.f_24189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24208 && iVar1 < Global_262145.f_24195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24210 && iVar1 < Global_262145.f_24197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24211 && iVar1 < Global_262145.f_24198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24209 && iVar1 < Global_262145.f_24196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24201 && iVar1 < Global_262145.f_24188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24203 && iVar1 < Global_262145.f_24190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24207 && iVar1 < Global_262145.f_24194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24206 && iVar1 < Global_262145.f_24193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26756 && iVar1 < Global_262145.f_26758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25769 && iVar1 < Global_262145.f_25762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25770 && iVar1 < Global_262145.f_25763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25771 && iVar1 < Global_262145.f_25764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25772 && iVar1 < Global_262145.f_25765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26757 && iVar1 < Global_262145.f_26759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25773 && iVar1 < Global_262145.f_25766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25774 && iVar1 < Global_262145.f_25767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25775 && iVar1 < Global_262145.f_25768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25780 && iVar1 < Global_262145.f_25801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25781 && iVar1 < Global_262145.f_25802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25782 && iVar1 < Global_262145.f_25803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25783 && iVar1 < Global_262145.f_25804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25784 && iVar1 < Global_262145.f_25805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25785 && iVar1 < Global_262145.f_25806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25786 && iVar1 < Global_262145.f_25807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25787 && iVar1 < Global_262145.f_25808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25788 && iVar1 < Global_262145.f_25809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25789 && iVar1 < Global_262145.f_25810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25790 && iVar1 < Global_262145.f_25811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25791 && iVar1 < Global_262145.f_25812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25792 && iVar1 < Global_262145.f_25813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25793 && iVar1 < Global_262145.f_25814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25794 && iVar1 < Global_262145.f_25815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25795 && iVar1 < Global_262145.f_25816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25796 && iVar1 < Global_262145.f_25817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25797 && iVar1 < Global_262145.f_25818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25798 && iVar1 < Global_262145.f_25819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25799 && iVar1 < Global_262145.f_25820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25800 && iVar1 < Global_262145.f_25821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28604 && iVar1 < Global_262145.f_28625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28605 && iVar1 < Global_262145.f_28626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28606 && iVar1 < Global_262145.f_28627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28607 && iVar1 < Global_262145.f_28628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28608 && iVar1 < Global_262145.f_28629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28609 && iVar1 < Global_262145.f_28630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28610 && iVar1 < Global_262145.f_28631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28611 && iVar1 < Global_262145.f_28632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28612 && iVar1 < Global_262145.f_28633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28613 && iVar1 < Global_262145.f_28634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28614 && iVar1 < Global_262145.f_28635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28615 && iVar1 < Global_262145.f_28636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28616 && iVar1 < Global_262145.f_28637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28617 && iVar1 < Global_262145.f_28638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28618 && iVar1 < Global_262145.f_28639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28619 && iVar1 < Global_262145.f_28640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28620 && iVar1 < Global_262145.f_28641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28621 && iVar1 < Global_262145.f_28642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28644 && iVar1 < Global_262145.f_28645) && !Global_262145.f_28599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28647 && iVar1 < Global_262145.f_28648) && !Global_262145.f_28600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28652 && iVar1 < Global_262145.f_28655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28653 && iVar1 < Global_262145.f_28656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28654 && iVar1 < Global_262145.f_28657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29670 && iVar1 < Global_262145.f_29335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29321 && iVar1 < Global_262145.f_29342)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29322 && iVar1 < Global_262145.f_29328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29668 && iVar1 < Global_262145.f_29336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29669 && iVar1 < Global_262145.f_29337)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29315 && iVar1 < Global_262145.f_29334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29316 && iVar1 < Global_262145.f_29343)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29317 && iVar1 < Global_262145.f_29333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29318 && iVar1 < Global_262145.f_29331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29664 && iVar1 < Global_262145.f_29338)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29665 && iVar1 < Global_262145.f_29339)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29666 && iVar1 < Global_262145.f_29340)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29667 && iVar1 < Global_262145.f_29341)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29319 && iVar1 < Global_262145.f_29330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29320 && iVar1 < Global_262145.f_29332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30129 && iVar1 < Global_262145.f_30112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30130 && iVar1 < Global_262145.f_30113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30131 && iVar1 < Global_262145.f_30114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30132 && iVar1 < Global_262145.f_30115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30133 && iVar1 < Global_262145.f_30116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30134 && iVar1 < Global_262145.f_30117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30135 && iVar1 < Global_262145.f_30118)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30136 && iVar1 < Global_262145.f_30119)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30137 && iVar1 < Global_262145.f_30120)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30146)
		{
		}
		else if (!Global_262145.f_30138 && iVar1 < Global_262145.f_30121)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30139 && iVar1 < Global_262145.f_30122)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30140 && iVar1 < Global_262145.f_30123)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30141 && iVar1 < Global_262145.f_30124)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30142 && iVar1 < Global_262145.f_30125)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30147)
		{
		}
		else if (!Global_262145.f_30143 && iVar1 < Global_262145.f_30126)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30144 && iVar1 < Global_262145.f_30127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30145 && iVar1 < Global_262145.f_30128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30997 && iVar1 < Global_262145.f_30980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30998 && iVar1 < Global_262145.f_30981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30999 && iVar1 < Global_262145.f_30982)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31000 && iVar1 < Global_262145.f_30983)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31001 && iVar1 < Global_262145.f_30984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31002 && iVar1 < Global_262145.f_30985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31003 && iVar1 < Global_262145.f_30986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31004 && iVar1 < Global_262145.f_30987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31005 && iVar1 < Global_262145.f_30988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31006 && iVar1 < Global_262145.f_30989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31007 && iVar1 < Global_262145.f_30990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31008 && iVar1 < Global_262145.f_30991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31009 && iVar1 < Global_262145.f_30992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31010 && iVar1 < Global_262145.f_30993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31011 && iVar1 < Global_262145.f_30994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31012 && iVar1 < Global_262145.f_30995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31013 && iVar1 < Global_262145.f_30996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31872 && iVar1 < Global_262145.f_31857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31873 && iVar1 < Global_262145.f_31858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31874 && iVar1 < Global_262145.f_31859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31875 && iVar1 < Global_262145.f_31860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31876 && iVar1 < Global_262145.f_31861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31877 && iVar1 < Global_262145.f_31862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31878 && iVar1 < Global_262145.f_31863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31879 && iVar1 < Global_262145.f_31864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31880 && iVar1 < Global_262145.f_31865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31881 && iVar1 < Global_262145.f_31866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31882 && iVar1 < Global_262145.f_31867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31883 && iVar1 < Global_262145.f_31868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31884 && iVar1 < Global_262145.f_31869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31885 && iVar1 < Global_262145.f_31870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31950)
		{
		}
		else if (!Global_262145.f_31886 && iVar1 < Global_262145.f_31871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33037 && iVar1 < Global_262145.f_33018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33031 && iVar1 < Global_262145.f_33012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33035 && iVar1 < Global_262145.f_33016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33029 && iVar1 < Global_262145.f_33010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33040 && iVar1 < Global_262145.f_33021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33032 && iVar1 < Global_262145.f_33013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33041 && iVar1 < Global_262145.f_33022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33043 && iVar1 < Global_262145.f_33024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33034 && iVar1 < Global_262145.f_33015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33042 && iVar1 < Global_262145.f_33023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33045 && iVar1 < Global_262145.f_33026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33030 && iVar1 < Global_262145.f_33011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33038 && iVar1 < Global_262145.f_33019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33044 && iVar1 < Global_262145.f_33025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33036 && iVar1 < Global_262145.f_33017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33046 && iVar1 < Global_262145.f_33027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33033 && iVar1 < Global_262145.f_33014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33028 && iVar1 < Global_262145.f_33009)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_474()
{
	return (unk_0xA7384DAD7CF469DA() || unk_0x807ABE1AB65C24D2());
}

bool func_475()
{
	return (unk_0x3EBD3AF4E5D7A08C() || unk_0xC545AB1CF97ABB34());
}

int func_476()
{
	return 0;
}

int func_477()
{
	return 1;
}

int func_478()
{
	return 1;
}

int func_479()
{
	if (unk_0x014D8C5910A5B01B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_480()
{
	var uVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (unk_0xAF5DBE95205A49D1())
	{
		if (unk_0x5B66E9FB7530BB95())
		{
			if (unk_0x2F04A4784A70593C())
			{
				unk_0x61481F9FBB1C7EDD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCED9E32812D6C7C7(&uVar0, 2);
				unk_0xCED9E32812D6C7C7(&uVar0, 4);
				unk_0xCED9E32812D6C7C7(&uVar0, 6);
				unk_0xCED9E32812D6C7C7(&Global_25, 2);
				unk_0xCED9E32812D6C7C7(&Global_25, 4);
				unk_0xCED9E32812D6C7C7(&Global_25, 6);
				unk_0x076A5661EF5ABEE4(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB8F4926B803BFD19())
				{
					iVar0 = unk_0x5D851A9195129CE9(866);
					unk_0xCED9E32812D6C7C7(&iVar0, false);
					unk_0x212EDDD868F364B5(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0xB8F4926B803BFD19())
	{
		if (BitTest(unk_0x5D851A9195129CE9(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_481(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(iParam0);
	uVar1 = unk_0x80D16DB58890B7BC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3C57C2F07FEE34D2(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_470(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97802[iVar0]))
		{
			if (Global_97802[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_483(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]) && unk_0x55A0C756C4A8220C(Global_97772[iVar0], 0))
			{
				if (Global_97772[iVar0] == iParam0 && unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == unk_0x15CAA6D7B11F1A7C(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_484(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[24]))
	{
		if (iParam0 == Global_77137.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77137.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_485(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_487(iParam0, 0))
		{
			func_486(iParam0, 1, 0);
			func_486(iParam0, 2, 0);
			func_486(iParam0, 3, 0);
			func_486(iParam0, 4, 0);
			func_486(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		func_486(iParam0, 0, 0);
	}
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Global_113386.f_32749[iParam0]), iParam1);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_113386.f_32749[iParam0]), bParam1);
	}
}

int func_487(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

void func_488(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_492(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_77137.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x55A0C756C4A8220C(Global_77137.f_139[iParam0], 0))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_77137.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x2D58A6131679D82C(Global_77137.f_139[iParam0], 1, 1);
				unk_0xD59CC8123FD1A789(&(Global_77137.f_139[iParam0]));
			}
		}
		Global_77137[iParam0] = 1;
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_487(iParam0, 0)) && Global_78046.f_66 == 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] != 0) && Global_113386.f_32749.f_1958[Global_77137.f_555[0 /*21*/].f_14] > 3) && (!func_490(0, Global_77137.f_555[0 /*21*/].f_12) || !func_490(1, Global_77137.f_555[0 /*21*/].f_12)))
			{
				func_489(&(Global_113386.f_32749.f_69[Global_77137.f_555[0 /*21*/].f_14 /*78*/]), &Global_78046);
				Global_78124 = Global_113386.f_32749.f_5591;
			}
			func_485(iParam0, 0);
		}
	}
}

void func_489(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_490(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_491(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_470(Global_113386.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_491(var uParam0)
{
	return *uParam0;
}

int func_492(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_304(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_304(0, 1);
			uParam0->f_12 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_304(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_304(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_304(1, 1);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_304(1, 2);
			uParam0->f_12 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 19);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_304(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_304(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_304(2, 1);
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 20);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 14);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 28);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 7);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 27);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 24);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 10);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 11);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 9);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 22);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_480())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_480())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 13);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 2);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), true);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), false);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 21);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 30);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 23);
			unk_0xCED9E32812D6C7C7(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113386.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_50(Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113386.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113386.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_50(Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_50(Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113386.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113386.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[iVar0]) && !unk_0x55B23FE400FCEA6B(Global_77137.f_484[iVar0], 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[iVar0], 0))
		{
			unk_0xDCA20DBA52B32EEC(uParam0, &iVar1, &iVar2);
			unk_0xDCA20DBA52B32EEC(Global_77137.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x15CAA6D7B11F1A7C(iParam0) == unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[iVar0]) && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_494(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x15CAA6D7B11F1A7C(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_496(iParam0, Global_77137.f_139[38], 0))
			{
				func_488(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_496(iParam0, Global_77137.f_139[43], 1))
			{
				func_488(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x9A39844D6003635C(unk_0xE2D3D51028F0428A(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_496(iParam0, uVar1[iVar6], 1) && func_495(unk_0x6B62510F212526DC(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_50(Param1, 0f, 0f, 0f, 0)) || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(iParam0, 1), unk_0x6B62510F212526DC(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xD59CC8123FD1A789(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[14]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[14], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[14]) == joaat("luxor2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[14]))
				{
					func_488(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xE5965CDF24F93A9F(Global_77137.f_484[20]) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x55A0C756C4A8220C(Global_77137.f_484[20], 0))
			{
				if (unk_0x15CAA6D7B11F1A7C(Global_77137.f_484[20]) == joaat("swift2") && unk_0x3A5087062A6DBAEF(iParam0) == unk_0x3A5087062A6DBAEF(Global_77137.f_484[20]))
				{
					func_488(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_495(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_496(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xE5965CDF24F93A9F(uParam1) && !unk_0x55B23FE400FCEA6B(iParam1, 0)) && unk_0x55A0C756C4A8220C(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xDCA20DBA52B32EEC(uParam0, &iVar0, &iVar1);
			unk_0xDCA20DBA52B32EEC(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			Global_97772[iVar0] = uParam0;
			Global_97782[iVar0] = iParam1;
			Global_97792[iVar0] = unk_0x15CAA6D7B11F1A7C(uParam0);
			if (unk_0xCB09A834F0C86FBB(Global_97792[iVar0]))
			{
				Global_97820[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_97820[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xE5965CDF24F93A9F(Global_97772[iVar0]))
		{
			if (iParam0 == 145 || Global_97782[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x15CAA6D7B11F1A7C(Global_97772[iVar0]) == func_304(iParam0, iParam1))
				{
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Global_97772[iVar0], 0))
					{
						unk_0x2D58A6131679D82C(Global_97772[iVar0], 0, 1);
						unk_0xD59CC8123FD1A789(&(Global_97772[iVar0]));
						Global_97782[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_499(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x55A0C756C4A8220C(uParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_517(iParam0))
		{
			if (unk_0x2E87280918B16506(&(uParam1->f_1)) != 0)
			{
				unk_0x2C2F2F6BEE7AC7E7(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xACF41D856B7CCB39())
			{
				unk_0xE56B65C6B89CFCF2(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_307(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_307(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_307(iVar2)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_307(iVar3)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_307(iVar4)))
					{
					}
					else
					{
						unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_307(4)))
			{
			}
			else
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 10) != 0)
			{
				unk_0xCED9E32812D6C7C7(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_307(iVar5)))
				{
				}
				else
				{
					unk_0xCED9E32812D6C7C7(&(uParam1->f_77), func_307(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x077FDC1A202B9273(iParam0, 0);
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 5) != -1)
			{
				unk_0x077FDC1A202B9273(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x401F3880D64CB7D9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x812006F6C16BBEA2(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x4A498F8F5DB5D526(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xD27CAD777BB60AE5(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_515(uParam1->f_5) || func_515(uParam1->f_6))
			{
			}
			else
			{
				unk_0x58DAFDEB2F46A5EA(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x952B5201CC721090(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_514(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_513())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xFEF0C9A733C7B609(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_309(uParam1->f_66))
		{
			unk_0x2EB7787881686751(iParam0, 0);
		}
		else
		{
			unk_0x2EB7787881686751(iParam0, 0);
			unk_0x2EB7787881686751(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0xAFE1B52F0DE91595(iParam0, 0);
			unk_0x8C5DD298059D8BF8(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x3B2646B62E7BBE11(iParam0, uParam1->f_70);
		}
		unk_0x74FCADE93B81FD35(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xBE69E921963A86B7(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xBE69E921963A86B7(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xBE69E921963A86B7(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xBE69E921963A86B7(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0x4FA753674D81BF2E(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0x8F0BC830FFCF7F2A(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE1F8DBCF9A6E205E(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				if (unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_512(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_512(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x351E83123EFC0A15(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xA36A3AB3D2350CCD(iParam0, 1);
			}
			else
			{
				unk_0x47B16F33DD2893CF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_505(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x4262B4DCEADC2695(uParam1->f_66) && !unk_0xD2B5B1C8FC84FE0F(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_307(iVar6 + 1)))
				{
					if (!unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
					{
						unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 0);
					}
				}
				else if (unk_0xC49329A4E58D025B(iParam0, iVar6 + 1))
				{
					unk_0x45A6EA15139A0C54(iParam0, iVar6 + 1, 1);
				}
				iVar6++;
			}
		}
		if ((unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("sheava") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("omnis")) || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("le7b"))
		{
			if (unk_0x0DD0BC46C4CFD6AD(iParam0, 0) == -1)
			{
				unk_0x45A6EA15139A0C54(iParam0, 1, 0);
			}
		}
		if (((func_500() && unk_0xD6F7D32A98E07F93(uParam1->f_66)) && unk_0x03377F11051BC47F(iParam0)) && !unk_0x7010991FDA59D3F2(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					unk_0x3739DEED4A756E69(iParam0, 2);
				}
				else
				{
					unk_0x3739DEED4A756E69(iParam0, 3);
				}
			}
			else
			{
				unk_0x3739DEED4A756E69(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x2C8C3211219C37BD(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_500()
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_503(7))
	{
		if (func_502(Global_2703735.f_4.f_16) || func_501(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_501(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_11(iParam0, 9);
	}
	return 0;
}

bool func_503(int iParam0)
{
	return func_504(&(Global_2703735.f_169), iParam0);
}

var func_504(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_505(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x55A0C756C4A8220C(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x03AC3319D1B50189(*uParam0) == 0)
	{
		return 0;
	}
	unk_0x3C1BCE3438ECBFC0(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x6C6188D0F8AB739A(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, 255);
				}
				else
				{
					unk_0x300BFAA8E2A36A8E(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x6C6188D0F8AB739A(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x0DD0BC46C4CFD6AD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x0CF999545677298A(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_510(*uParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x0061B7C9351B41ED(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_509(unk_0x15CAA6D7B11F1A7C(*uParam0), 1) && unk_0x0DD0BC46C4CFD6AD(*uParam0, 24) != func_508(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x0061B7C9351B41ED(*uParam0, 24, func_508(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_507(uParam0);
	if (func_506(*uParam0))
	{
		unk_0xFF74DEC3F62D3654(*uParam0, 1);
		unk_0x05EAB38F5AC8DA1D(*uParam0, 1);
	}
	return 1;
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xE5965CDF24F93A9F(uParam0) && unk_0x55A0C756C4A8220C(iParam0, 0)) && unk_0x03AC3319D1B50189(iParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xAC1327F86AC1314A(iParam0, iVar1, unk_0x0DD0BC46C4CFD6AD(iParam0, iVar1)), 32);
				iVar2 = unk_0x2E87280918B16506(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x2E87280918B16506("MNU_CAGE") || iVar2 == unk_0x2E87280918B16506("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_507(var uParam0)
{
	switch (unk_0x15CAA6D7B11F1A7C(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x0DD0BC46C4CFD6AD(*uParam0, 4) == 0)
			{
				unk_0x0061B7C9351B41ED(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x0CF999545677298A(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x0061B7C9351B41ED(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xE5965CDF24F93A9F(uParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		switch (unk_0x15CAA6D7B11F1A7C(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x6B83F5AE0478286F(iParam0, 38);
		iVar1 = unk_0x6B83F5AE0478286F(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_509(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19186)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19188)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19192)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19189)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19196)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19194)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19199)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21144)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21145)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_510(int iParam0, int iParam1, int iParam2)
{
	if (!func_511() && unk_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_511()
{
	return 0;
}

void func_512(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x03AC3319D1B50189(uParam0) > 0)
	{
		unk_0x3C1BCE3438ECBFC0(iParam0, 0);
		iVar0 = unk_0x0DD0BC46C4CFD6AD(iParam0, 24);
		iVar1 = unk_0xCCEE7D38FC5D9FD6(iParam0, 24);
		unk_0xE19D99912C7661C6(iParam0, uParam1);
		if (unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("tornado6") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x0CF999545677298A(iParam0, 24);
		}
		else
		{
			unk_0x0061B7C9351B41ED(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_513()
{
	return unk_0x014D8C5910A5B01B(joaat("mpindependence"));
}

int func_514(int iParam0)
{
	var uVar0;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
			{
				if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_515(int iParam0)
{
	if (!func_511() && func_516(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (!func_523(unk_0x9E2D6C50374FCFA9(), -1))
		{
			uParam0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	if (!unk_0xE5965CDF24F93A9F(uParam0))
	{
		return 0;
	}
	if (unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x55A0C756C4A8220C(iParam0, 0))
	{
		return 0;
	}
	if (func_519(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && unk_0x55A0C756C4A8220C(iParam0, 0))
		{
			if (func_518(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (unk_0x6BD06F4780EAC5DD("FMDeliverableID", 3))
	{
		if (unk_0xF2549FF74D64B720(uParam0, "FMDeliverableID"))
		{
			return unk_0xC3B76795ECBDEF41(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_519(int iParam0)
{
	if (func_522(iParam0) == 233)
	{
		return func_520(iParam0);
	}
	return -1;
}

int func_520(int iParam0)
{
	if (func_521(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_521(int iParam0, int iParam1)
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_522(int iParam0)
{
	if (func_521(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_523(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_73(uParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(uParam0), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_524(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_492(&(Global_77137.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x987A5F1E1A67E3C0(Param0, Global_77137.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_488(iVar0);
			}
		}
		iVar0++;
	}
}

int func_525(var uParam0)
{
	if (func_526(uParam0))
	{
		if (unk_0x0152AA00FA3130F1(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_526(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_470(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_495(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_527()
{
	return func_525(&(Global_106934.f_2890));
}

void func_528()
{
	func_529(&(Global_106934.f_2890));
}

void func_529(var uParam0)
{
	if (func_526(uParam0))
	{
		unk_0xD69A0C3662175E68(uParam0->f_12.f_66);
	}
}

void func_530()
{
	if (unk_0x52D132F41E04CB67(uLocal_1134))
	{
		unk_0x7DE67EEEFEC38205(uLocal_1134);
	}
}

int func_531()
{
	if (!Global_100441 == 10 && !Global_100441 == 9)
	{
		return 0;
	}
	return Global_100441.f_2;
}

struct<39> func_532(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0.f_0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_533(0) };
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_28 = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_31 = 35.4714f;
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_16 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_19 = { -4.8332f, 0f, -177.1283f };
		Var0.f_33 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_533(1) };
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_28 = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_31 = 78.0874f;
		Var0.f_10 = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_13 = { -13.5249f, 0f, 30.6033f };
		Var0.f_16 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_19 = { -22.5196f, 0f, -43.0435f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_533(2) };
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_28 = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_31 = 140.1039f;
		Var0.f_10 = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_13 = { -25.1365f, 0f, 41.3912f };
		Var0.f_16 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_19 = { -16.3326f, 0f, -127.0114f };
		Var0.f_33 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_533(3) };
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_28 = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_31 = 1.4374f;
		Var0.f_10 = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_13 = { -21.2059f, 0f, -109.0176f };
		Var0.f_16 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_19 = { -27.0037f, 0f, 29.464f };
		Var0.f_33 = { 0f, 0f, 0f };
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0.f_0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_533(4) };
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_28 = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_31 = 69.6524f;
		Var0.f_10 = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_13 = { -20.8953f, 0f, -132.9451f };
		Var0.f_16 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_19 = { -1.5585f, 0f, 6.9143f };
		Var0.f_33 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

Vector3 func_533(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_534()
{
	bool bVar0;
	
	bVar0 = func_124(Global_113386.f_19963.f_1, 4096);
	Global_113386.f_19963.f_1 = 0;
	if (bVar0)
	{
		func_545(&(Global_113386.f_19963.f_1), 4096);
	}
}

void func_535()
{
}

bool func_536()
{
	return func_526(&(Global_106934.f_2890));
}

int func_537()
{
	if (Global_100441 == 10 || Global_100441 == 9)
	{
		return 1;
	}
	return 0;
}

void func_538()
{
	if (func_58(&uLocal_1340))
	{
		Global_113386.f_19963.f_5 = func_52(&uLocal_1340);
	}
	if (!iLocal_1180)
	{
		unk_0x1CF3F44FC2EB9F99("ASS1_LOST");
	}
	unk_0xE24865B69D79521B("SCRIPT\ASSASSINATION_MULTI");
	func_273();
	func_256();
	func_261();
	func_262(1);
	func_420();
	func_542();
	func_446(0);
	func_3();
	if (unk_0xE5965CDF24F93A9F(Global_96938.f_28[0]))
	{
		unk_0x2D58A6131679D82C(Global_96938.f_28[0], 1, 1);
		unk_0x59E393B344098656(&(Global_96938.f_28[0]));
	}
	unk_0x7BACBB4C6A7B18B7(uLocal_1132, 0);
	unk_0x7BACBB4C6A7B18B7(uLocal_1133, 0);
	func_530();
	func_92(&uLocal_1533, 0, 0);
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		func_540(unk_0xE2D3D51028F0428A(), 1);
		unk_0xA091C233F9D0AB04(unk_0xE2D3D51028F0428A(), 0, -1, 0);
	}
	unk_0x8576657A629C4B0A(1f);
	unk_0x2AA70F35B0B111E6();
	unk_0x269268AD5D4CA266(iLocal_1331, 0);
	unk_0x269268AD5D4CA266(iLocal_1332, 0);
	func_539();
	unk_0xAFBDF6A5E54114C1();
}

void func_539()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0) && !unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_282(Local_1252[iVar0 /*3*/], 1) < 5f)
			{
				unk_0xC64B6E13A6A7F517(unk_0xE2D3D51028F0428A(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				unk_0xBBF86885619695CE(unk_0xE2D3D51028F0428A(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_540(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (unk_0xA7E29842FA438ED6(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_541(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_100478 > 0)
	{
		Global_106934.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_103950.f_21[iParam1] = iVar0;
	}
}

int func_541(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_100478 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_106934.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_103950.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_542()
{
	unk_0xA72858C94E70296C(102, "ASSOJva");
	unk_0xA72858C94E70296C(107, "ASSOJva");
	unk_0x10F7BFE3A88CB99B("OJASva_101");
	unk_0x10F7BFE3A88CB99B("OJASva_101a");
	unk_0x10F7BFE3A88CB99B("OJASva_104");
}

void func_543()
{
	int iVar0;
	
	if (unk_0xF79F112CE5999680("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || func_46(0))
	{
		if (!func_544())
		{
			iVar0 = func_45();
			if (iVar0 != -1)
			{
				if (!func_39(iVar0))
				{
					return;
				}
				unk_0xCED9E32812D6C7C7(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_44();
		}
	}
}

int func_544()
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_545(var uParam0, int iParam1)
{
	func_546(uParam0, iParam1);
}

void func_546(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

