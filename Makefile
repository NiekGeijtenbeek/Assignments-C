.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_3_2 - Debug ]----------"
	@cd "Assignment1_3_2" && "$(MAKE)" -f  "Assignment1_3_2.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_3_2 - Debug ]----------"
	@cd "Assignment1_3_2" && "$(MAKE)" -f  "Assignment1_3_2.mk" clean
