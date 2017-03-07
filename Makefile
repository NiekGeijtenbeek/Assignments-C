.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment2_3_2 - Release ]----------"
	@cd "Assignment2_3_2" && "$(MAKE)" -f  "Assignment2_3_2.mk"
clean:
	@echo "----------Cleaning project:[ Assignment2_3_2 - Release ]----------"
	@cd "Assignment2_3_2" && "$(MAKE)" -f  "Assignment2_3_2.mk" clean
